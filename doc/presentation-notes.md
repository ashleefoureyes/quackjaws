# Presentation Speaking Notes

## Section Allocation

<i>These can change of course, I was kind of just going off what everyone's main contribution focus was.</i>


<b>Part 1 (Ashlee):</b> Intro, overview, explanation of classfication, overview of first classification groups (slides 1-3)

<b>Part 2 (Jake):</b> Classification group (second), client analysis, explanation of client traits and applications. (slides 4-5)

<b>Part 3 (Skyler):</b> Key Attributes,importance of, and explanation of their applications (slide 6)

<b>Part 4 (Will):</b> Optimal Match Explanation (math-y stuff) and ending (slides 7-8)

---
### Part 1

1. Intro and Presentation Overview

2. Animal Classification

##### Sample Script
```
Will write later.
```
---
### Part 2

1. General overview of remaining classfications

2. Explanation of Client Analysis

##### Sample Script
```
* explain last 3 classfication groups, basically summarizing the description on
  the slide *

* light description of the key client attributes shown on the slide, giving
  examples of each *

Fierce convoys are those animals which are typically large, active, and good
protectors of the home. They are the loyalists and the protectors.

Cuddly companions, on the other hand, are animals who are soft, gentle, and
great around children. They are the small fluffy animals that you may fall
asleep cuddling.

Seasoned Sidekicks are those animals which are old and have a lot of life
experience. They tend to be gentle, not very active, and are good companions
for older clients.

Each client answers a few questions to build their own profile, consisting of
different personality traits (a few you can see here). These traits are taken
into account when matching a client to their best suited classification group,
and also in the broad implementation of the algorithm. Taking into account
client traits ensures that not only an animal is a great fit for the client,
but that the client is a great fit for the animal.

Some examples of client traits are their dwelling type (condo, apartment,
detached home) or their location (rural, urban or suburban setting).
```

---
### Part 3

1. Overview of key attributes

2. Explanation on how each "groups" of attributes apply to our algorithm. That is:
   - attributes that apply to determining what classfication each animal belongs to.
   - Filter attributes that eliminate any animals that do not possess those attributes from potential matches.
   - Display attributes
   that determine the ranking and top recommended matches.

##### Sample Script
```
We've listed a few key animal attributes here.

*explain different scaling systems (1-5, booleans, etc).*

The classification attributes are the ones we use to determine which classifcation group the animals belong to.

The filter attributes are those that eliminate animals in the matched grouped if they do not correspond to client preferences. Examples include gender and whether an animal is hypoallergic. If a client requested a Male, Hypoallergenic dog then all animals that do not meet those requirements are taken away from the matched set.

Finally we have our display attributes, which act as our final step when determining a match. Certain attributes are used for our auxillary scoring system, which Will will touch on later, but they also act as a sort of "Behind-the scenes" match refinement tool. For an example, if there exists an equal match between two animals, the animal that entered the shelter earlier would be displayed as the clients best match.

CONTINUE
```
---

### Part 4

1. An Optimal Match
   - Explantion of the algorithm including euclidean distance, etc.

##### Sample Script
<u><i> <b>Question:</b> are we specifying that the classification groups are only for cats and dogs, since we did not really make any groups specifically for lizards and birds? </u></i>
```
As we have highlighted, we complete animal classfications for all animals, and match clients to their optimal classfication group. We then filter animals in the matched group based on our filter traits, as Skyler noted earlier. Next, we have to determine the optimal match from this remaining set of animals.

To do this, we first calcuate the euclidean distance between the client vector and the vectors of all animals within this set. The distance value is added to a matrix, represented internally as a 2D array. These values are known as match scores. The lower the match score, the better the match.

Next, we perform auxiliary scoring, based on predefined rules to add or remove a fixed amount from a match score.

An example of a rule would be regarding the attribute "colour". If the clients preferred colour matches the animal's colour, remove 2 from the score. Another example could be concerning animal history - maybe the animal is a rescue dog and the client indicated an interest in rescue dogs, so subtract 2 from the score.

CONTINUE
```

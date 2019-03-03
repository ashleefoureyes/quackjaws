# COMP3004 D2 - Algorithm

### Overview
We aim to provide potential adopters with best-suited matches. However, we want to abstain from the classic method of using traits as filters to provide an exact match. To do this, we have identified different classes of animals identified by different title names. Each class represents a strategic grouping of selected traits, and every potential adopter is matched with most compatible class. 

#### Summary of Steps
1. An animal is added. Based on physical and non-physical traits, the animal is classified into one of our defined groups. How this is done is outlined in more detail below. 

2. Clients provide the system with their information and what they are looking for. They are then assigned the animal group that is most compatible to them.

3. User-specified Filtered Traits (defined later) are then applied to the animal group.

4. Display order calculations are applied to the group, affecting the order in which they are presented. 


## Classification of Animals

We have identified groups to which every animal belongs to only one, based on physical and non-physical traits.

#### Rural Rovers
Rural Rovers include medium to large sized animals who are energetic and require a lot of exercise. They thrive in outdoor settings such as farms and acreages, and behave well with other animals. 

##### Most weighted traits: 
indoor/outdoor, energy, animal friendly, mess

#### Family Pal
Family Pals are animals who love the affection from their owners – both adults and children. They are dogs of any size who thrive in rural and suburban environments. They do not mind the hectic lifestyles of young families.

##### Most weighted traits: 
child-friendly, energy level, noise, crowds, travel, age

#### Urban Dweller 
Urban Dwellers love the city life – from exciting walks in the park to accompanying owners on brunch dates (dogs). They do not mind living the high-rise life, and do well with noise and crowds. 

##### Most weighted traits: 
crowds, noise, size, indoor-outdoor, mess, energy

#### Cuddly Companion
Cuddly Companions are the ultimate late-night snuggle buddies. They are more often lethargic and therefore do not require as much exercise and space, making them perfect for urban environments (however not exclusively). 

##### Most weighted traits: 
affection, energy level, child friendly, size

#### Fierce Convoy
Fierce Convoys feel it is their duty to protect and server. They are large dogs that do best in rural and suburban environments, and require exercise to maintain their fierce demeanor.  

##### Most weighted traits: 
protection, size, energy-level, age

#### Experienced Sidekick
Experienced sidekicks have seen it all, and are ready to take it easy. These pets are well-suited for any dwelling, and do not require as much high-level exercise and do not make as much mess as younger animals. 

##### Most weighted traits: 
age, energy level, affection, mess, indoor/outdoor

## Computation Overview

To compute which class the animal belongs to, we use the following traits: 

-	Size
-	Age
-	Indoor/Outdoor
-	Child-Friendly
-	Animal Friendly
-	Noise
-	Energy Level
-	Protection
-	Mess
-	Affection
-	Travel

When an animal questionnaire is filled out, a vector is generated with all responses. A vector for the above traits looks like:  
ArrayMeasurements = 
{size, age, indoorOut, childFri, animalFri, noise, energyLev, protection, mess, affection, travel}

We compare against the ideal arrays for each classification by using a measure of similarity. Namely, the cosine similarity. 

The cosine similarity measures similarity between two non-zero vectors of an inner product space – it measures the cosine of the angle between them. 

The cosine of two non-zero vectors can be derived by using the Euclidean dot product formula:

![equation1]
(https://github.com/ashleefoureyes/quackjaws/blob/master/doc/doc-pics/equation1.png)

Given two vectors of attributes, A and B, the cosine similarity, cos(θ), is represented using a dot product and magnitude as

![equation2]
(https://github.com/ashleefoureyes/quackjaws/blob/master/doc/doc-pics/equation2.png)


Now lets say we have animal ‘A’ who’s vector appears as: 

animalA {large, 4, outdoor, 4, 5, 3, 4, 3, 4, 4, 2}

which translates to: 

animalA {3, 2, 2, 2.5, 3, 2, 2.5, 2, 2.5, 2.5, 1.5}

We want to compare it to the vectors that best represent each classification  (this still needs to be done, the examples below are NOT representative). Lets say that a couple of the vectors are:

ruralRover = {2, 2, 2, 2, 1, 2, 1, 2, 2.5, 3, 1.5} and 
cuddlyComp {1, 2, 2, 2, 3, 2, 3, 2, 2.5, 3, 2}

Similarity(animalA, ruralRover) = .922
Similarity(animalA, cuddlyComp) = .977

Therefore, in this hypothetical example the animal would belong to the Cuddly Companion classification. 

### Filter

There exists certain traits that will act as a filter however. These include: 
-	Species (Cat or Dog)
-	Hypoallergenic
-	Child Friendly 
When a specific species is selected, animals who fall under the matched group will still be shown, however only animals of that specific species will be presented to the user. When true Boolean values exist for hypoallergenic or child friendly, these will also act as filters – users will only be presented animals of the matched color that are hypoallergenic and/or child friendly. 


### Display Order – User Preferred Traits

The users preference on the remaining traits affect the order in which matches are displayed to the user (assuming top animals are displayed first). They include: 

-	Breed
-	Gender
-	Fur-length
-	History
-	Fear

### Display Order – Other Factors

In addition to display order based on client preference to the above traits, we also want to include a few “behind the scenes” calculations. One, is taking into account the time that the animal has been at the shelter. If there exists an equivalent (or near equivalent) match, display the animal who has been at the shelter longest first. 




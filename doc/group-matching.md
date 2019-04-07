## More-Detailed Animal Classification

### Matching Animal to Group
The traits used to identify which classification group the animal belongs to are: 

- size
- age
- children (good with)
- animals (good with)
- crowds (good with)
- noises (good with)
- protector 
- energy
- fearful
- affection
- messy
- hypo (allergenic)
- lifestyle (indoor/outdoor)

Using variable names from the code, the vector therefore, is as: 

<b><i>{size,age,children,goodWAnimals,crowds,noises,protector,energy,fearful,affection,messy,hypo,lifestyle}
</i></b>


>For traits not used (within animal constructor) use null maybe? If we cant, we can work out a way to factor them in.


#### Rural Rovers

optimal array: 
{4,2,2,4,2,3,3,4,0,1,4,False,1}

#### Family Pal

optimal array: 
{3,1,4,3,3,4,2,3,1,3,2,False,2}

#### Urban Dweller
{0,2,2,1,4,4,0,2,2,2,1,True,0}

#### Cuddly Companion
optimal array: 
{1,2,2,1,1,1,1,1,1,4,2,True,0}

#### Fierce Convoy
optimal array: 
{4,2,0,0,1,3,4,4,0,1,2,False,2}

#### Experienced Sidekick
optimal array: 
{2,4,2,2,3,4,1,1,2,3,0,True,0}

---
### Matching Client to Group
Traits used to identify which classification group the client matches with: 

- Dwelling Type (0-4)
- Location (0-2)
- Work Schedule (0-6)
- Children (bool)
- Activity Level (0-4)
- Other Animals (bool)

Array is represented by: 
{ dwelling, location, workSchedule, activity, hasChildren, hasAnimals }

#### Rural Rovers

client optimal array: 
{4,2,5,4,True,True}

#### Family Pal

client optimal array: 
{3,1,0,2,True,True}

#### Urban Dweller
client optimal array
{0,0,0,1,False,False}

#### Cuddly Companion
client optimal array: 
{2,1,5,1,False,False}

#### Fierce Convoy
optimal array: 
{3,1,3,3,False,False}

#### Experienced Sidekick
client optimal array: 
{1,0,6,0,False,False}

### Optional Animal Groups
To be used if we want, for other species (rabbits, lizards and birds) Let me know if you think this is best then we can come up with groups and optimal arrays for them. 

#### Overall Assumptions: 

>For children, goodWAnimals, crowds, noises, protector, energy, fearful, affection, messy: 
0 = not at all 
4 = a lot

>For size: 0 = teacup, 4 = Large

>For lifestyle: 0 = indoor, 1=outdoor, 2=Both

> hypoallergenic = bool

** age is represented by an int, so we should convert the age to an array that represents age groups where 0 = youngest and 4 = oldest. 


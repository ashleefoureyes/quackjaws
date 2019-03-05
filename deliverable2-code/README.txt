Program: cuACS Deliverable 2

Authors:
Jake Bauer 101040373
Ashlee Foureyes 101050609
Will Watt 100973531
Skyler Gubbels 100885506

Purpose: To store and display Animals and their attributes. Animals are stored
in persistent storage and loaded in at the startup.

Files:
  - main.cpp
  - addanimal.h addanimal.cpp addanimal.ui
  - addclient.h addclient.cpp addclient.ui
  - animal.h animal.cpp
  - animalstorage.h animalstorage.cpp
  - bird.h bird.cpp
  - cat.h cat.cpp
  - client.h client.cpp
  - clienthomepage.h clienthomepage.cpp
  - databasestorage.h databasestorage.cpp
  - dog.h dog.cpp
  - filesaver.h filesaver.cpp
  - lizard.h lizard.cpp
  - mainwindow.h mainwindow.cpp mainwindow.ui
  - profile.h profile.cpp
  - rabbit.h rabbit.cpp
  - staffhomepage.h staffhomepage.cpp
  - storage.h storage.cpp
  - viewanimals.h viewanimals.cpp viewanimals.ui
  - viewclients.h viewclients.cpp viewclients.ui

Compilation:
Navigate to the directory where the deliverable2-code was
downloaded and extracted (for example: ~/Downloads/deliverable2-code/ and type
"make".

Launching:
  ./COMP3004

Operation Instructions:
At program startup you will be prompted to enter a client email or log in as staff

If you log in as staff you will be given the following options
  - Add Animal
  - View Animals
  - Add Client
  - View Clients
  - Run Algorithm (Not yet implemented)
  - Logout

If you log in as a client you will be given the following options (to view the
emails for the client profiles that are provided, log in as a staff member first
and navigate to View Clients):
  - View Animals
  - Logout

Add Animal: User will be given a form of Animal information to fill out. Once
filled out, a new animal will be created and stored in the storage object.

View Animals: A popup window will appear showing all animals in storage and
their attributes. When clicked on detailed animal attributes will be displayed.
Animals can be filtered by species.

Add Client: User will fill out basic client information. Once completed the client
will be added to Client Storage.

View Clients: A popup window will appear showing all clients in storage.
When clicked on, basic client information will be displayed.

Exit: All animals in storage will be saved to persistent storage and the
program will terminate.

Logout:  User will be returned to initial window where they can choose to log in
as staff or client.

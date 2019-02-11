Program: cuACS Deliverable 1

Authors:
Jake Bauer 101040373
Ashlee Foureyes 101050609
Will Watt 100973531
Skyler Gubbels 100885506

Purpose: To store and display Animals and their attributes. Animals are stored
in persistent storage and loaded in at the startup.

Files:
  - main.cpp
  - addanimalview.cpp addanimalview.ui
  - animal.cpp animal.h
  - control.cpp control.h
  - filesaver.cpp filesaver.h
  - mainwindow.cpp mainwindow.ui mainwindow.h
  - storage.cpp storage.h
  - view.cpp view.ui view.h
  - deliverable1-code.pro deliverable1-code.pro.user
  - Makefile
  - savedAnimals.txt

Compilation:
in directory of makefile ROOT_DIR/deliverable1-code type "make"
Where ROOT_DIR is the filepath to your deliverable1-code directory

Launching:
  ./deliverable1-code

Operation Instructions:
Click enter on initial popup and you will be given three options:
  - Add Animal
  - View Animal
  - Exit

Add Animal: User will be given a form of Animal information to fill out. Once
filled out a new animal will be created and stored in the storage object.

View Animal: A popup window will appear showing all animals in storage and
their attributes

Exit: All animals in storage will be saved to persistent storage and the
program will terminate

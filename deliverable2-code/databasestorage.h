#ifndef DATABASESTORAGE_H
#define DATABASESTORAGE_H

#define STARTING_ID 100;

#include "client.h"
#include "clientstorage.h"
#include "animalstorage.h"
#include "animal.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "lizard.h"
#include "rabbit.h"

#include <string>
#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QTextStream>
#include <QStandardPaths>

class databaseStorage
{
    public:
    databaseStorage(AnimalStorage*, ClientStorage*);
    ~databaseStorage();
    int addClientToDatabase(Client*);
    int addDogToDatabase(Dog*);
    int addCatToDatabase(Cat*);
    int addBirdToDatabase(Bird*);
    int addLizardToDatabase(Lizard*);
    int addRabbitToDatabase(Rabbit*);
    void initDatabase();

    private:
    int numClients;
    int numAnimals;
    int loadDatabase();
    AnimalStorage *animalStorage;
    ClientStorage *clientStorage;
    int lifeStyleToInt(QString);
    int historyToInt(QString str);
};


#endif // DATABASESTORAGE_H

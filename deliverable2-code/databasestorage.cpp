#include "databasestorage.h"
#include "animal.h"
#include "client.h"
#include "dog.h"

#include <string>
#include <iostream>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QTextStream>
#include <QStandardPaths>
#include <QMessageBox>
#include <QString>
#include <QDebug>

/** Function: databaseStorage()
    Purpose: Constructor. */

databaseStorage::databaseStorage()
{
    numOfElements = 0;
}

databaseStorage::~databaseStorage(){}


void databaseStorage::initDatabase(){

    QTextStream cerr(stderr);

       QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation) + "/cuACS.db");

       if (db.open()){
           cerr << "SUCCESS - DB OPENED\n";
           QSqlQuery query;
           query.exec("CREATE TABLE IF NOT EXISTS dogStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, barks INTEGER, training INTEGER, bathroomTrained INTEGER, goodBoy INTEGER, filepath TEXT);");
           query.exec("CREATE TABLE IF NOT EXISTS clientStorage(idNum INTEGER PRIMARY KEY, fName TEXT, lName TEXT, address TEXT, phone TEXT, email TEXT, city TEXT, prov TEXT);");
           loadDatabase();
       }
       else {
           cerr << "Connection Failed.";
       }
}

int databaseStorage::addClientToDatabase(Client *c){

    QSqlQuery query;
    QTextStream cerr(stderr);

   bool success = false;

   query.prepare("INSERT INTO clientStorage(idNum, fName, lName, address, phone, email, city, prov) VALUES (:i, :f, :l, :a, :p, :e, :c, :r)");
    query.bindValue(":i", c->getId());
    query.bindValue(":f", QString::fromStdString(c->getFirstName()));
    query.bindValue(":l", QString::fromStdString(c->getLastName()));
    query.bindValue(":a", QString::fromStdString(c->getAddress()));
    query.bindValue(":p", QString::fromStdString(c->getPhoneNum()));
    query.bindValue(":e", QString::fromStdString(c->getEmail()));
    query.bindValue(":c", QString::fromStdString(c->getCity()));
    query.bindValue(":p", QString::fromStdString(c->getProvince()));
   if(query.exec()) {
          success = true;
          cerr << "ADDED";
      }
      else{
       cerr << "ERROR ADDING \n";
        qDebug() << "addPerson error:"
                        << query.lastError();
      }
    return 0;
}

int databaseStorage::addDogToDatabase(Dog *a){
    QSqlQuery query;
    QTextStream cerr(stderr);
    bool success = false;

    query.prepare("INSERT INTO dogStorage(idNum, breed, name, size, age, gender, fur, travels, children, goodWithAnimals,"
                  " strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal, "
                  "hypo, lifeStyle, history, barks, training, bathroomTrained, goodBoy, filepath) "
                  "VALUES(:idNum, :breed, :name, :size, :age, :gender, :fur, :travels, :children, :goodWithAnimals, "
                  ":strangers, :crowds, :noises, :protector, :energy, :fearful, :affection, :messy, :nocturnal, "
                  ":hypo, :lifeStyle, :history, :barks, :training, :bathroomTrained, :goodBoy, :filepath)");
     query.bindValue(":idNum", a->getId());
     query.bindValue(":breed", QString::fromStdString(a->getBreed()));
     query.bindValue(":name", QString::fromStdString(a->getName()));
     query.bindValue(":size", a->getSize());
     query.bindValue(":age", a->getAge());
     query.bindValue(":gender", QString(QChar::fromLatin1(a->getGender())));
     query.bindValue(":fur", a->getFur());
     query.bindValue(":travels", a->getTravels());
     query.bindValue(":children", a->getChildren());
     query.bindValue(":goodWithAnimals", a->getGoodWAnimals());
     query.bindValue(":strangers", a->getStrangers());
     query.bindValue(":crowds", a->getCrowds());
     query.bindValue(":noises", a->getNoises());
     query.bindValue(":protector", a->getProtector());
     query.bindValue(":energy", a->getEnergy());
     query.bindValue(":fearful", a->getFearful());
     query.bindValue(":affection", a->getAffection());
     query.bindValue(":messy", a->getMessy());
     query.bindValue(":nocturnal", a->getNocturnal());
     query.bindValue(":hypo", a->isHypo());
     query.bindValue(":lifeStyle", QString::fromStdString(a->getLifestyleStr()));
     query.bindValue(":history", QString::fromStdString(a->getHistoryStr()));
     query.bindValue(":barks", a->getBarks());
     query.bindValue(":training", a->getTraining());
     query.bindValue(":bathroomTrained", a->getIsBathroomTrained());
     query.bindValue(":goodBoy", a->isAGoodDog());
     query.bindValue(":filepath", QString::fromStdString(a->getImageFilePath()));

    if(query.exec()) {
           success = true;
           cerr << "DOG ADDED";
       }
       else{
        cerr << "ERROR ADDING DOG \n";
         qDebug() << "addDog error:"
                         << query.lastError();
       }
     return 0;
}

int databaseStorage::addCatToDatabase(Cat *a){
    QSqlQuery query;
    QTextStream cerr(stderr);
    bool success = false;

    query.prepare("INSERT INTO dogStorage(idNum, breed, name, size, age, gender, fur, travels, children, goodWithAnimals,"
                  " strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal, "
                  "hypo, lifeStyle, history, barks, training, bathroomTrained, goodBoy, filepath) "
                  "VALUES(:idNum, :breed, :name, :size, :age, :gender, :fur, :travels, :children, :goodWithAnimals, "
                  ":strangers, :crowds, :noises, :protector, :energy, :fearful, :affection, :messy, :nocturnal, "
                  ":hypo, :lifeStyle, :history, :barks, :training, :bathroomTrained, :goodBoy, :filepath)");
     query.bindValue(":idNum", a->getId());
     query.bindValue(":breed", QString::fromStdString(a->getBreed()));
     query.bindValue(":name", QString::fromStdString(a->getName()));
     query.bindValue(":size", a->getSize());
     query.bindValue(":age", a->getAge());
     query.bindValue(":gender", QString(QChar::fromLatin1(a->getGender())));
     query.bindValue(":fur", a->getFur());
     query.bindValue(":travels", a->getTravels());
     query.bindValue(":children", a->getChildren());
     query.bindValue(":goodWithAnimals", a->getGoodWAnimals());
     query.bindValue(":strangers", a->getStrangers());
     query.bindValue(":crowds", a->getCrowds());
     query.bindValue(":noises", a->getNoises());
     query.bindValue(":protector", a->getProtector());
     query.bindValue(":energy", a->getEnergy());
     query.bindValue(":fearful", a->getFearful());
     query.bindValue(":affection", a->getAffection());
     query.bindValue(":messy", a->getMessy());
     query.bindValue(":nocturnal", a->getNocturnal());
     query.bindValue(":hypo", a->isHypo());
     query.bindValue(":lifeStyle", QString::fromStdString(a->getLifestyleStr()));
     query.bindValue(":history", QString::fromStdString(a->getHistoryStr()));
     query.bindValue(":barks", a->getBarks());
     query.bindValue(":training", a->getTraining());
     query.bindValue(":bathroomTrained", a->getIsBathroomTrained());
     query.bindValue(":goodBoy", a->isAGoodDog());
     query.bindValue(":filepath", QString::fromStdString(a->getImageFilePath()));

    if(query.exec()) {
           success = true;
           cerr << "DOG ADDED";
       }
       else{
        cerr << "ERROR ADDING DOG \n";
         qDebug() << "addDog error:"
                         << query.lastError();
       }
     return 0;
}

int databaseStorage::loadDatabase(){
    QSqlQuery q;
    QTextStream cerr(stderr);

    int numRows;
    q.exec("SELECT count(*) FROM clientStorage;");
    q.first();
    numRows = q.value(0).toInt();
    q.exec("SELECT * FROM clientStorage;");
    cerr << numRows <<"\n";
    while (q.next()) {
            int id = q.value(0).toInt();
            QString fName = q.value(1).toString();
            QString lName = q.value(2).toString();
            QString add = q.value(3).toString();
            QString phone = q.value(4).toString();
            QString email = q.value(5).toString();
            QString city = q.value(6).toString();
            QString prov = q.value(7).toString();

          //  (*newClient)->setContactInformation(firstName,lastName,address,phone, email, city, province);
            Client *c = new Client;
            c->setContactInformation(fName.toStdString(), lName.toStdString(), add.toStdString(), phone.toStdString(), email.toStdString(), city.toStdString(), prov.toStdString());
            c->setIdNumber(id);
          // stor.add(c);

            cerr << id << fName << lName << add << phone << email << city << prov << "\n";
        }
    return 0;
}


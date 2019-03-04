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
           query.exec("CREATE TABLE IF NOT EXISTS clientStorage(idNum INTEGER PRIMARY KEY, fName TEXT, lName TEXT, address TEXT, phone TEXT, email TEXT, city TEXT, prov TEXT);");
           query.exec("CREATE TABLE IF NOT EXISTS dogStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, barks INTEGER, training INTEGER, bathroomTrained INTEGER, goodBoy INTEGER, filepath TEXT);");
           query.exec("CREATE TABLE IF NOT EXISTS catStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, curiosity INTEGER, trained INTEGER, shedding INTEGER, filepath TEXT);");
           query.exec("CREATE TABLE IF NOT EXISTS birdStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, loud INTEGER, social INTEGER, colour TEXT, filepath TEXT);");
           query.exec("CREATE TABLE IF NOT EXISTS lizardStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, diet TEXT, colour TEXT, feed TEXT, space INTEGER, light INTEGER, filepath TEXT);");
           query.exec("CREATE TABLE IF NOT EXISTS rabbitStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, pattern TEXT, colour TEXT, grooming INTEGER, attention INTEGER, filepath TEXT);");

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

int databaseStorage::addBirdToDatabase(Bird *a){
    QSqlQuery query;
    QTextStream cerr(stderr);
    bool success = false;

    query.prepare("INSERT INTO birdStorage(idNum, breed, name, size, age, gender, fur, travels, children, goodWithAnimals,"
                  " strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal, "
                  "hypo, lifeStyle, history, loud, social, colour, filepath) "
                  "VALUES(:idNum, :breed, :name, :size, :age, :gender, :fur, :travels, :children, :goodWithAnimals, "
                  ":strangers, :crowds, :noises, :protector, :energy, :fearful, :affection, :messy, :nocturnal, "
                  ":hypo, :lifeStyle, :history, :loud, :social, :colour, :filepath)");
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
     query.bindValue(":loud", a->getLoud());
     query.bindValue(":social", a->getSocial());
     query.bindValue(":colour", QString::fromStdString(a->getColour()));
     query.bindValue(":filepath", QString::fromStdString(a->getImageFilePath()));

    if(query.exec()) {
           success = true;
           cerr << "BIRD ADDED";
       }
       else{
        cerr << "ERROR ADDING BIRD \n";
         qDebug() << "addDog error:"
                         << query.lastError();
       }
     return 0;
}

int databaseStorage::addLizardToDatabase(Lizard *a){
    QSqlQuery query;
    QTextStream cerr(stderr);
    bool success = false;

    query.prepare("INSERT INTO lizardStorage(idNum, breed, name, size, age, gender, fur, travels, children, goodWithAnimals,"
                  " strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal, "
                  "hypo, lifeStyle, history, diet, feed, colour, space, light, filepath) "
                  "VALUES(:idNum, :breed, :name, :size, :age, :gender, :fur, :travels, :children, :goodWithAnimals, "
                  ":strangers, :crowds, :noises, :protector, :energy, :fearful, :affection, :messy, :nocturnal, "
                  ":hypo, :lifeStyle, :history, :diet, :feed, :colour, :space, :light, :filepath)");
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
     query.bindValue(":diet", QString::fromStdString(a->getDiet()));
     query.bindValue(":colour", QString::fromStdString(a->getColour()));
     query.bindValue(":feed", QString::fromStdString(a->getFeedingInterval()));
     query.bindValue(":space", a->getSpaceReqs());
     query.bindValue(":light", a->getLightingReqs());
     query.bindValue(":filepath", QString::fromStdString(a->getImageFilePath()));

    if(query.exec()) {
           success = true;
           cerr << "Lizard ADDED";
       }
       else{
        cerr << "ERROR ADDING Lizard \n";
         qDebug() << "addDog error:"
                         << query.lastError();
       }
     return 0;
}

int databaseStorage::addCatToDatabase(Cat *a){
    QSqlQuery query;
    QTextStream cerr(stderr);
    bool success = false;

    query.prepare("INSERT INTO catStorage(idNum, breed, name, size, age, gender, fur, travels, children, goodWithAnimals,"
                  " strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal, "
                  "hypo, lifeStyle, history, curiosity, trained, shedding, filepath) "
                  "VALUES(:idNum, :breed, :name, :size, :age, :gender, :fur, :travels, :children, :goodWithAnimals, "
                  ":strangers, :crowds, :noises, :protector, :energy, :fearful, :affection, :messy, :nocturnal, "
                  ":hypo, :lifeStyle, :history, :curiosity, :trained, :shedding, :filepath)");
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
     query.bindValue(":trained", a->getTrained());
     query.bindValue(":shedding", a->getShedding());
     query.bindValue(":curiosity", a->getCuriosity());
     query.bindValue(":filepath", QString::fromStdString(a->getImageFilePath()));

    if(query.exec()) {
           success = true;
           cerr << "CAT ADDED";
       }
       else{
        cerr << "ERROR ADDING CAT \n";
         qDebug() << "addCat error:"
                         << query.lastError();
       }
     return 0;
}

int databaseStorage::addRabbitToDatabase(Rabbit *a){
    QSqlQuery query;
    QTextStream cerr(stderr);
    bool success = false;

    query.prepare("INSERT INTO rabbitStorage(idNum, breed, name, size, age, gender, fur, travels, children, goodWithAnimals,"
                  " strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal, "
                  "hypo, lifeStyle, history, pattern, colour, grooming, attention, filepath) "
                  "VALUES(:idNum, :breed, :name, :size, :age, :gender, :fur, :travels, :children, :goodWithAnimals, "
                  ":strangers, :crowds, :noises, :protector, :energy, :fearful, :affection, :messy, :nocturnal, "
                  ":hypo, :lifeStyle, :history, :pattern, :colour, :grooming, :attention, :filepath)");
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
     query.bindValue(":pattern", QString::fromStdString(a->getPattern()));
     query.bindValue(":colour", QString::fromStdString(a->getColour()));
     query.bindValue(":grooming", (a->getGrooming()));
     query.bindValue(":attention", a->getAttention());
     query.bindValue(":filepath", QString::fromStdString(a->getImageFilePath()));

    if(query.exec()) {
           success = true;
           cerr << "RABBIT ADDED";
       }
       else{
        cerr << "ERROR ADDING Rabbit \n";
         qDebug() << "addDog error:"
                         << query.lastError();
       }
     return 0;
}


int databaseStorage::loadDatabase(){
    QSqlQuery q;
    QTextStream cerr(stderr);

/*  int numRows;
    q.first();
    numRows = q.value(0).toInt();
    cerr << numRows <<"\n";
*/
    //q.exec("SELECT count(*) FROM clientStorage;");

 // Get All clients from Database //
    q.exec("SELECT * FROM clientStorage;");
    while (q.next()) {
        int id = q.value(0).toInt();
        QString fName = q.value(1).toString();
        QString lName = q.value(2).toString();
        QString add = q.value(3).toString();
        QString phone = q.value(4).toString();
        QString email = q.value(5).toString();
        QString city = q.value(6).toString();
        QString prov = q.value(7).toString();

        Client *c = new Client;
        c->setContactInformation(fName.toStdString(), lName.toStdString(), add.toStdString(), phone.toStdString(), email.toStdString(), city.toStdString(), prov.toStdString());
        c->setIdNumber(id);
        Storage *clientStorage = new Storage;
        clientStorage->add(c);


        cerr << c->getId() << fName << lName << add << phone << email << city << prov << "\n";

       // clientStorage->add(c);
    }

    // Get All Dogs from Database //
    q.exec("SELECT * FROM dogStorage;");
    while (q.next()) {
        int idNum = q.value(0).toInt();
        QString breed = q.value(1).toString();
        QString name = q.value(2).toString();
        int size = q.value(3).toInt();
        int age = q.value(4).toInt();
        QString gender = q.value(5).toString();
        int fur = q.value(6).toInt();
        int travels = q.value(7).toInt();
        int children = q.value(8).toInt();
        int goodWithAnimals = q.value(9).toInt();
        int strangers = q.value(10).toInt();
        int crowds = q.value(11).toInt();
        int noises = q.value(12).toInt();
        int protector = q.value(13).toInt();
        int energy = q.value(14).toInt();
        int fearful = q.value(15).toInt();
        int affection = q.value(16).toInt();
        int messy = q.value(17).toInt();
        bool nocturnal = q.value(18).toInt();
        bool hypo = q.value(19).toInt();
        int lifeStyle = q.value(20).toInt();
        int history = q.value(21).toInt();
        int barks = q.value(22).toInt();
        int training = q.value(23).toInt();
        bool bathroomTrained = q.value(24).toInt();
        bool goodboy = q.value(25).toInt();
        QString filepath = q.value(26).toString();

        char g = QString(gender).toStdString().c_str()[0];

        Dog* a = new Dog;
        a->setIdNumber(idNum);
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, lifeStyle, history);
        a->setSpeciesAttributes(barks, training, bathroomTrained);
        a->setImageFilePath(filepath.toStdString());
        cerr << "DOG ID" <<a->getId()<<"\n";
    }

        // Get All CATS from Database //
    q.exec("SELECT * FROM catStorage;");
        while (q.next()) {
        int idNum = q.value(0).toInt();
        QString breed = q.value(1).toString();
        QString name = q.value(2).toString();
        int size = q.value(3).toInt();
        int age = q.value(4).toInt();
        QString gender = q.value(5).toString();
        int fur = q.value(6).toInt();
        int travels = q.value(7).toInt();
        int children = q.value(8).toInt();
        int goodWithAnimals = q.value(9).toInt();
        int strangers = q.value(10).toInt();
        int crowds = q.value(11).toInt();
        int noises = q.value(12).toInt();
        int protector = q.value(13).toInt();
        int energy = q.value(14).toInt();
        int fearful = q.value(15).toInt();
        int affection = q.value(16).toInt();
        int messy = q.value(17).toInt();
        bool nocturnal = q.value(18).toInt();
        bool hypo = q.value(19).toInt();
        int lifeStyle = q.value(20).toInt();
        int history = q.value(21).toInt();
        int curious = q.value(22).toInt();
        int trained = q.value(23).toInt();
        bool shed = q.value(24).toInt();
        QString filepath = q.value(26).toString();

        char g = QString(gender).toStdString().c_str()[0];

        Cat* a = new Cat;
        a->setIdNumber(idNum);
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, lifeStyle, history);
        a->setSpeciesAttributes(curious, trained, shed);
        a->setImageFilePath(filepath.toStdString());
        cerr << "CAT ID" <<a->getId()<<"\n";
    }

            // Get All LIZARD from Database //
    q.exec("SELECT * FROM lizardStorage;");
        while (q.next()) {
        int idNum = q.value(0).toInt();
        QString breed = q.value(1).toString();
        QString name = q.value(2).toString();
        int size = q.value(3).toInt();
        int age = q.value(4).toInt();
        QString gender = q.value(5).toString();
        int fur = q.value(6).toInt();
        int travels = q.value(7).toInt();
        int children = q.value(8).toInt();
        int goodWithAnimals = q.value(9).toInt();
        int strangers = q.value(10).toInt();
        int crowds = q.value(11).toInt();
        int noises = q.value(12).toInt();
        int protector = q.value(13).toInt();
        int energy = q.value(14).toInt();
        int fearful = q.value(15).toInt();
        int affection = q.value(16).toInt();
        int messy = q.value(17).toInt();
        bool nocturnal = q.value(18).toInt();
        bool hypo = q.value(19).toInt();
        int lifeStyle = q.value(20).toInt();
        int history = q.value(21).toInt();
        QString diet = q.value(22).toString();
        QString colour = q.value(23).toString();
        QString feed = q.value(24).toString();
        bool space = q.value(25).toInt();
        bool light = q.value(26).toInt();
        QString filepath = q.value(27).toString();

        char g = QString(gender).toStdString().c_str()[0];

        Lizard* a = new Lizard;
        a->setIdNumber(idNum);
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, lifeStyle, history);
        a->setSpeciesAttributes(diet.toStdString(), colour.toStdString(), feed.toStdString(), space, light);
        a->setImageFilePath(filepath.toStdString());
        cerr << "LIZARD ID" <<a->getId()<<"\n";
    }
    // Get All Birds from Database //
    q.exec("SELECT * FROM birdStorage;");
        while (q.next()) {
        int idNum = q.value(0).toInt();
        QString breed = q.value(1).toString();
        QString name = q.value(2).toString();
        int size = q.value(3).toInt();
        int age = q.value(4).toInt();
        QString gender = q.value(5).toString();
        int fur = q.value(6).toInt();
        int travels = q.value(7).toInt();
        int children = q.value(8).toInt();
        int goodWithAnimals = q.value(9).toInt();
        int strangers = q.value(10).toInt();
        int crowds = q.value(11).toInt();
        int noises = q.value(12).toInt();
        int protector = q.value(13).toInt();
        int energy = q.value(14).toInt();
        int fearful = q.value(15).toInt();
        int affection = q.value(16).toInt();
        int messy = q.value(17).toInt();
        bool nocturnal = q.value(18).toInt();
        bool hypo = q.value(19).toInt();
        int lifeStyle = q.value(20).toInt();
        int history = q.value(21).toInt();
        int loud = q.value(22).toInt();
        int social = q.value(23).toInt();
        QString colour = q.value(24).toString();
        QString filepath = q.value(25).toString();

        char g = QString(gender).toStdString().c_str()[0];

        Bird* a = new Bird;
        a->setIdNumber(idNum);
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, lifeStyle, history);
        a->setSpeciesAttributes(loud, social, colour.toStdString());
        a->setImageFilePath(filepath.toStdString());
        cerr << "Bird ID" <<a->getId()<<"\n";
    }

    // Get All Rabbits from Database //
    q.exec("SELECT * FROM rabbitStorage;");
        while (q.next()) {
        int idNum = q.value(0).toInt();
        QString breed = q.value(1).toString();
        QString name = q.value(2).toString();
        int size = q.value(3).toInt();
        int age = q.value(4).toInt();
        QString gender = q.value(5).toString();
        int fur = q.value(6).toInt();
        int travels = q.value(7).toInt();
        int children = q.value(8).toInt();
        int goodWithAnimals = q.value(9).toInt();
        int strangers = q.value(10).toInt();
        int crowds = q.value(11).toInt();
        int noises = q.value(12).toInt();
        int protector = q.value(13).toInt();
        int energy = q.value(14).toInt();
        int fearful = q.value(15).toInt();
        int affection = q.value(16).toInt();
        int messy = q.value(17).toInt();
        bool nocturnal = q.value(18).toInt();
        bool hypo = q.value(19).toInt();
        int lifeStyle = q.value(20).toInt();
        int history = q.value(21).toInt();
        QString pattern = q.value(22).toString();
        QString colour = q.value(23).toString();
        bool grooming = q.value(24).toInt();
        bool attention = q.value(25).toInt();
        QString filepath = q.value(26).toString();

        char g = QString(gender).toStdString().c_str()[0];

        Rabbit* a = new Rabbit;
        a->setIdNumber(idNum);
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, lifeStyle, history);
        a->setSpeciesAttributes(pattern.toStdString(), colour.toStdString(), grooming, attention);
        a->setImageFilePath(filepath.toStdString());
        cerr << "Rabbit ID" <<a->getId()<<"\n";
    }
    return 0;
}




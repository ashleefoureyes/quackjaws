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

databaseStorage::databaseStorage(AnimalStorage *animalStorage, Storage *clientStorage)
{
    numAnimals = 0;
    numClients = 0;
    this->animalStorage = animalStorage;
    this->clientStorage = clientStorage;
    initDatabase();
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

           query.exec("INSERT INTO clientStorage VALUES(1100,'Mitch','Marner','238 Bay Street','4837397362','mm16@gmail.com','Toronto','Ontario');");
           query.exec("INSERT INTO clientStorage VALUES(1101,'Auston','Matthews','283 Beckwith St','4732796382','a.matthews34@gmail.com','Montreal','Quebec');");
           query.exec("INSERT INTO clientStorage VALUES(1102,'John','Tavares','38 Main St','9362847625','jt9191@gmail.com','Happy Vally Goose Bay','Newfoundland and Labrador');");
           query.exec("INSERT INTO clientStorage VALUES(1103,'William','Nylander','937 Patrick Lane','7309751372','slick_willie29@gmail.com','Calgary','Alberta');");
           query.exec("INSERT INTO clientStorage VALUES(1104,'Morgan','Rielly','4836 Sharp St','479367287','mo.riles44@gmail.com','Vancouver','British Columbia');");
           query.exec("INSERT INTO clientStorage VALUES(1105,'Nazim','Kadri','28547 Tenth Line', '7925670987','nazzer43@gmail.com','Moncton','New Brunswick');");

            query.exec("INSERT INTO dogStorage VALUES(2105,'Golden Retriever','Goldy',1,1,'M',1,4,4,4,4,3,2,1,4,1,4,4,0,0,'Outdoor','Street Animal',3,0,1,1,'animalPhotos/Goldy.jpg');");
            query.exec("INSERT INTO dogStorage VALUES(2106,'German Sheperd','Germaine',3,6,'F',2,4,3,2,3,1,2,3,1,4,2,0,0,0,'Outdoor','Street Animal',1,4,1,1,'animalPhotos/Germaine.jpg');");
            query.exec("INSERT INTO dogStorage VALUES(2122,'Golden Retriever','Tucker',3,13,'M',2,4,4,4,4,2,1,2,2,1,3,1,0,0,'Indoor/Outdoor','Rescue',1,3,1,1,'animalPhotos/Tucker.jpg');");
            query.exec("INSERT INTO dogStorage VALUES(2123,'Pug','Giselle',1,2,'F',1,4,4,4,4,4,0,0,4,1,3,3,0,0,'Indoor/Outdoor','Rescue',0,0,1,1,'animalPhotos/Giselle.jpg');");
            query.exec("INSERT INTO dogStorage VALUES(2124,'Golden Retriever','Bud',3,4,'M',1,0,2,3,3,1,3,2,3,0,3,2,0,0,'Indoor/Outdoor','Rescue',3,3,1,1,'animalPhotos/Bud.jpg');");

            query.exec("INSERT INTO catStorage VALUES(3100,'Bengal','Cinnamon',1,2,'F',1,1,2,3,2,2,3,3,2,4,1,3,1,1,'Indoor','Brought by owner',4,0,4,'animalPhotos/Cinnamon0.jpg');");
            query.exec("INSERT INTO catStorage VALUES(3115,'British Shorthair','Thomas',1,1,'M',1,0,0,3,1,3,4,2,3,2,1,3,0,0,'Indoor','Brought by owner',4,0,2,'animalPhotos/Thomas.jpg');");
            query.exec("INSERT INTO catStorage VALUES(3119,'Maine Coon','Petunia',0,15,'F',1,0,0,0,0,0,0,0,0,0,0,0,0,0,'Outdoor','Street Animal',0,2,0,'animalPhotos/Petunia.jpg');");
            query.exec("INSERT INTO catStorage VALUES(3120,'Scottish Fold','Buster',3,10,'M',1,0,1,3,1,2,1,1,1,2,2,1,0,0,'Indoor','Brought by owner',1,1,2,'animalPhotos/Buster0.jpg');");
            query.exec("INSERT INTO catStorage VALUES(3121,'Scottish Fold','Sir Hollingsworth',2,5,'M',2,0,2,1,3,4,2,2,3,1,1,2,0,0,'Indoor/Outdoor','Rescue',4,4,4,'animalPhotos/Sir Hollingsworth.jpg');");

            query.exec("INSERT INTO birdStorage VALUES(4103,'Cockatoo','Scream',1,4,'F',3,0,1,1,3,2,1,3,2,4,2,1,0,1,'Indoor','Brought by owner',4,4,'White','animalPhotos/Scream.jpg');");
            query.exec("INSERT INTO birdStorage VALUES(4111,'Cockatiel','Tina',1,7,'F',3,0,0,1,1,2,3,1,2,3,2,2,0,0,'Indoor','Brought by owner',4,2,'Green','animalPhotos/Tina.jpg');");
            query.exec("INSERT INTO birdStorage VALUES(4112,'Cockatiel','Pedro',2,12,'M',3,1,2,3,2,3,3,3,3,2,1,3,0,1,'Indoor','Brought by owner',4,4,'Yellow','animalPhotos/Pedro.jpg');");
            query.exec("INSERT INTO birdStorage VALUES(4113,'Macaw','Bella',3,28,'F',3,0,3,2,3,2,3,1,1,1,1,3,0,1,'Indoor','Brought by owner',4,1,'Red','animalPhotos/Bella.jpg');");
            query.exec("INSERT INTO birdStorage VALUES(4114,'Budgy','Caleb',2,0,'M',4,1,2,3,2,1,2,3,4,3,2,1,0,0,'Indoor','Brought by owner',4,4,'Green','animalPhotos/Caleb.jpg');");

            query.exec("INSERT INTO lizardStorage VALUES(5101,'Bearded Dragon','Boswer',2,14,'M',6,1,2,1,3,3,2,4,2,1,3,2,1,1,'Indoor','Brought by owner','Mice','Green','Daily',1,1,'animalPhotos/Boswer.jpg');");
            query.exec("INSERT INTO lizardStorage VALUES(5104,'Chameleon','Kimmy',1,34,'M',5,0,3,3,2,0,1,2,3,2,1,2,1,1,'Indoor','Brought by owner','Crickets','Green','Bi-Weekly',0,1,'animalPhotos/Kimmy.jpg');");
            query.exec("INSERT INTO lizardStorage VALUES(5116,'Other','Sally',0,1,'F',5,4,4,4,4,0,0,0,4,4,4,1,1,0,'Indoor','Brought by owner','Crickets','Brown','Bi-Weekly',0,1,'animalPhotos/Sally.jpg');");
            query.exec("INSERT INTO lizardStorage VALUES(5117,'Iguana, Green','Norma',0,15,'F',6,3,1,2,1,3,3,0,0,3,0,2,0,0,'Indoor','Brought by owner','Crickets','Green','Monthly',0,1,'animalPhotos/Norma.jpg');");
            query.exec("INSERT INTO lizardStorage VALUES(5118,'Gecko, Leopard','Geico',1,10,'M',5,3,3,3,2,1,0,2,4,3,1,2,1,0,'Indoor','Brought by owner','Worms','Green','Daily',0,1,'animalPhotos/Geico0.jpg');");

            query.exec("INSERT INTO rabbitStorage VALUES(6102,'Belgian Hare','Spot',2,7,'M',1,2,1,3,4,4,2,3,2,1,0,2,0,1,'Indoor','Brought by owner','Spotted','White',4,4,'animalPhotos/Spot.jpg');");
            query.exec("INSERT INTO rabbitStorage VALUES(6107,'Dutch','Luna',1,4,'F',1,0,2,1,3,2,1,3,2,1,3,1,0,1,'Indoor','Brought by owner','Bi-colour','White',0,4,'animalPhotos/Luna.jpg');");
            query.exec("INSERT INTO rabbitStorage VALUES(6108,'Britannia','Molly',0,1,'F',2,4,3,2,2,3,1,1,2,0,3,3,0,0,'Indoor/Outdoor','Rescue','Solid','White',4,4,'animalPhotos/Molly.jpg');");
            query.exec("INSERT INTO rabbitStorage VALUES(6109,'Californian','Tedford',2,6,'M',2,0,0,0,0,0,0,0,0,4,4,4,1,0,'Indoor','Brought by owner','Solid','Straw',0,4,'animalPhotos/Tedford.jpg');");
            query.exec("INSERT INTO rabbitStorage VALUES(6110,'Belgian Hare','Peter',3,12,'M',1,1,2,4,3,2,3,1,4,2,1,2,0,0,'Indoor','Brought by owner','Solid','Straw',0,0,'animalPhotos/Peter.jpg');");

           loadDatabase();
       }
       else {
           cerr << "Connection Failed.";
       }
}

int databaseStorage::addClientToDatabase(Client *c){

    QSqlQuery query;
    QTextStream cerr(stderr);

   query.prepare("INSERT INTO clientStorage(idNum, fName, lName, address, phone, email, city, prov) VALUES (:i, :f, :l, :a, :p, :e, :c, :r)");
    query.bindValue(":i", c->getId());
    query.bindValue(":f", QString::fromStdString(c->getFirstName()));
    query.bindValue(":l", QString::fromStdString(c->getLastName()));
    query.bindValue(":a", QString::fromStdString(c->getAddress()));
    query.bindValue(":p", QString::fromStdString(c->getPhoneNum()));
    query.bindValue(":e", QString::fromStdString(c->getEmail()));
    query.bindValue(":c", QString::fromStdString(c->getCity()));
    query.bindValue(":r", QString::fromStdString(c->getProvince()));
   if(query.exec()) {
          cerr << "CLIENT ADDED";
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
           cerr << "RABBIT ADDED" << "\n";

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

        std::stoi((std::to_string(id).substr(1)));

        Client *c = new Client;
        c->setContactInformation(fName.toStdString(), lName.toStdString(), add.toStdString(), phone.toStdString(), email.toStdString(), city.toStdString(), prov.toStdString());
        c->setIdNumber(std::stoi((std::to_string(id).substr(1))));
        (*clientStorage).add(c);

       // cerr << c->getId() << fName << lName << add << phone << email << city << prov << "\n";
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
        QString lifeStyle = q.value(20).toString();
        QString history = q.value(21).toString();
        int barks = q.value(22).toInt();
        int training = q.value(23).toInt();
        bool bathroomTrained = q.value(24).toInt();
       // bool goodboy = q.value(25).toInt();
        QString filepath = q.value(26).toString();

        char g = QString(gender).toStdString().c_str()[0];
        int ls = lifeStyleToInt(lifeStyle);
        int hst = historyToInt(history);

        Dog* a = new Dog;
        a->setIdNumber(std::stoi((std::to_string(idNum).substr(1))));
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, ls, hst);
        a->setSpeciesAttributes(barks, training, bathroomTrained);
        a->setImageFilePath(filepath.toStdString());
        a->setBreed(breed.toStdString());
        (*animalStorage).add(a);

        //cerr << "DOG ID" <<a->getId()<<"\n";
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
        QString lifeStyle = q.value(20).toString();
        QString history = q.value(21).toString();
        int curious = q.value(22).toInt();
        int trained = q.value(23).toInt();
        bool shed = q.value(24).toInt();
        QString filepath = q.value(25).toString();

        char g = QString(gender).toStdString().c_str()[0];
        int ls = lifeStyleToInt(lifeStyle);
        int hst = historyToInt(history);

        Cat* a = new Cat;
        a->setIdNumber(std::stoi((std::to_string(idNum).substr(1))));
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, ls, hst);
        a->setSpeciesAttributes(curious, trained, shed);
        a->setImageFilePath(filepath.toStdString());
        a->setBreed(breed.toStdString());

        (*animalStorage).add(a);

        //cerr << "CAT ID" <<a->getId()<<"\n";
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
        QString lifeStyle = q.value(20).toString();
        QString history = q.value(21).toString();
        QString diet = q.value(22).toString();
        QString colour = q.value(23).toString();
        QString feed = q.value(24).toString();
        bool space = q.value(25).toInt();
        bool light = q.value(26).toInt();
        QString filepath = q.value(27).toString();

        char g = QString(gender).toStdString().c_str()[0];
        int ls = lifeStyleToInt(lifeStyle);
        int hst = historyToInt(history);

        Lizard* a = new Lizard;
        a->setIdNumber(std::stoi((std::to_string(idNum).substr(1))));
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, ls, hst);
        a->setSpeciesAttributes(diet.toStdString(), colour.toStdString(), feed.toStdString(), space, light);
        a->setImageFilePath(filepath.toStdString());
        a->setBreed(breed.toStdString());

        (*animalStorage).add(a);

       // cerr << "LIZARD ID" <<a->getId()<<"\n";
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
        QString lifeStyle = q.value(20).toString();
        QString history = q.value(21).toString();
        int loud = q.value(22).toInt();
        int social = q.value(23).toInt();
        QString colour = q.value(24).toString();
        QString filepath = q.value(25).toString();

        char g = QString(gender).toStdString().c_str()[0];
        int ls = lifeStyleToInt(lifeStyle);
        int hst = historyToInt(history);

        Bird* a = new Bird;
        a->setIdNumber(std::stoi((std::to_string(idNum).substr(1))));
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, ls, hst);
        a->setSpeciesAttributes(loud, social, colour.toStdString());
        a->setImageFilePath(filepath.toStdString());
        a->setBreed(breed.toStdString());

        (*animalStorage).add(a);

       // cerr << "Bird ID" <<a->getId()<<"\n";
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
        QString lifeStyle = q.value(20).toString();
        QString history = q.value(21).toString();
        QString pattern = q.value(22).toString();
        QString colour = q.value(23).toString();
        bool grooming = q.value(24).toInt();
        bool attention = q.value(25).toInt();
        QString filepath = q.value(26).toString();

        char g = QString(gender).toStdString().c_str()[0];
        std::stoi((std::to_string(idNum).substr(1)));
        int ls = lifeStyleToInt(lifeStyle);
        int hst = historyToInt(history);


        Rabbit* a = new Rabbit;
        a->setIdNumber(std::stoi((std::to_string(idNum).substr(1))));
        a->setBaseAttributes(name.toStdString(), size, age , g, fur, travels, children,goodWithAnimals,
                             strangers, crowds, noises, protector, energy, fearful, affection, messy, nocturnal,
                             hypo, ls, hst);
        a->setSpeciesAttributes(pattern.toStdString(), colour.toStdString(), grooming, attention);
        a->setImageFilePath(filepath.toStdString());
        a->setBreed(breed.toStdString());

        (*animalStorage).add(a);

        //cerr << "Rabbit ID" <<a->getId() <<"\n";
    }

        int n;
        QSqlQuery query;
        query.exec("select count(*) from dogStorage;");
        query.first();
        n = query.value(0).toInt();
        query.exec("select count(*) from catStorage;");
        query.first();
        n += query.value(0).toInt();
        query.exec("select count(*) from birdStorage;");
        query.first();
        n += query.value(0).toInt();
        query.exec("select count(*) from lizardStorage;");
        query.first();
        n += query.value(0).toInt();
        query.exec("select count(*) from rabbitStorage;");
        query.first();
        n += query.value(0).toInt();
        numAnimals = n;

        query.exec("select count (*) from clientStorage;");
        query.first();
        numClients = query.value(0).toInt();

    return 0;
}

int databaseStorage::lifeStyleToInt(QString str)
{
    if (QString::compare(str, "Indoor", Qt::CaseInsensitive) == 0){
        return 0;
    }
    if (QString::compare(str, "Outdoor", Qt::CaseInsensitive) == 0){
        return 1;
    }
    if (QString::compare(str, "Indoor/Outdoor", Qt::CaseInsensitive) == 0){
        return 2;
    }
    else return 3;

}

int databaseStorage::historyToInt(QString str)
{
    if (QString::compare(str, "Brought by owner", Qt::CaseInsensitive) == 0){
        return 0;
    }
    if (QString::compare(str, "Street Animal", Qt::CaseInsensitive) == 0){
        return 1;
    }
    if (QString::compare(str, "Rescue", Qt::CaseInsensitive) == 0){
        return 2;
    }
    else return 3;
}





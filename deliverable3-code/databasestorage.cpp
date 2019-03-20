#include "databasestorage.h"
#include "animal.h"
#include "client.h"

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
 *  Purpose: Constructor. */

databaseStorage::databaseStorage(AnimalStorage *animalStorage, ClientStorage *clientStorage)
{
    numAnimals = 0;
    numClients = 0;
    this->animalStorage = animalStorage;
    this->clientStorage = clientStorage;
}

databaseStorage::~databaseStorage(){}

/** Function: initDatabase
 *  Purpose: Creates or locates database
 *           Initalizes the database.
 *           Creates tables within database
 *           Pupulates tables with clients and animals
 */
void databaseStorage::initDatabase(){

    QTextStream cerr(stderr);

       QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation) + "/cuACS.db");

       if (db.open()){
           cerr << "SUCCESS - DB OPENED\n";
           QSqlQuery query;

            query.exec("CREATE TABLE IF NOT EXISTS clientStorage(idNum INTEGER PRIMARY KEY, fName TEXT, lName TEXT, address TEXT, phone TEXT, email TEXT, city TEXT, prov TEXT, dwelling INTEGER, location INTEGER, workSchedule INTEGER, activity INTEGER, hasChildren INTEGER, hasAnimals INTEGER, travels INTEGER, children INTEGER, goodWAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, wantsDog INTEGER, hasDogAllergies INTEGER, dogBreeds TEXT, dogAge INTEGER, dogSize INTEGER, dogGender INTEGER, followsCommandsDog INTEGER, houseTrained INTEGER, wantsCat, hasCatAllergies INTEGER, catBreeds TEXT, catAge INTEGER, catSize INTEGER, catGender INTEGER, isCurious INTEGER, followCommandsCat INTEGER, doesntShed INTEGER, wantsBird INTEGER, hasBirdAllergies INTEGER, birdBreeds TEXT, birdAge INTEGER, birdSize INTEGER, birdGender INTEGER, isQuietBird INTEGER, isSocialBird INTEGER, birdColour TEXT, wantsLizard INTEGER, hasLizardAllergies INTEGER, lizardBreeds TEXT, lizardAge INTEGER, lizardSize INTEGER, lizardGender INTEGER, easyToFeed INTEGER, simpleLiving INTEGER, lizardColour TEXT, wantsRabbit INTEGER, hasRabbitAllergies INTEGER, rabbitBreeds INTEGER, rabbitAge INTEGER, rabbitSize INTEGER, rabbitGender INTEGER, isSocialRabbit INTEGER, needsGrooming INTEGER, rabbitColour TEXT, dogFur INTEGER ,catFur INTEGER, birdFur INTEGER, lizardFur INTEGER, rabbitFur INTEGER, quietness INTEGER, age INTEGER);");
            query.exec("CREATE TABLE IF NOT EXISTS dogStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, barks INTEGER, training INTEGER, bathroomTrained INTEGER, goodBoy INTEGER, filepath TEXT);");
            query.exec("CREATE TABLE IF NOT EXISTS catStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, curiosity INTEGER, trained INTEGER, shedding INTEGER, filepath TEXT);");
            query.exec("CREATE TABLE IF NOT EXISTS birdStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, loud INTEGER, social INTEGER, colour TEXT, filepath TEXT);");
            query.exec("CREATE TABLE IF NOT EXISTS lizardStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, diet TEXT, colour TEXT, feed TEXT, space INTEGER, light INTEGER, filepath TEXT);");
            query.exec("CREATE TABLE IF NOT EXISTS rabbitStorage(idNum INTEGER PRIMARY KEY, breed TEXT, name TEXT, size INTEGER, age INTEGER, gender INTEGER, fur INTEGER, travels INTEGER, children INTEGER, goodWithAnimals INTEGER, strangers INTEGER, crowds INTEGER, noises INTEGER, protector INTEGER, energy INTEGER, fearful INTEGER, affection INTEGER, messy INTEGER, nocturnal INTEGER, hypo INTEGER, lifeStyle INTEGER, history INTEGER, pattern TEXT, colour TEXT, grooming INTEGER, attention INTEGER, filepath TEXT);");

            query.exec("INSERT INTO clientStorage VALUES(1100,'Mitch','Marner','40 Bay St','4166291616','mitch16@gmail.com','Toronto','Ontario',0,0,5,4,0,0,3,2,3,2,3,2,1,4,2,1,3,1,0,'(Cocker Spaniel)(Pug)(Shih Tzu)',1,1,-1,4,3,1,0,'(Bengal)(Russian Blue)',-1,-1,-1,1,4,2,0,0,'',-1,-1,-1,0,0,'Red',0,0,'',-1,-1,-1,0,0,'Red',0,0,'',-1,-1,-1,0,0,'None',1,-1,-1,-1,-1,2,22);");
            query.exec("INSERT INTO clientStorage VALUES(1101,'Auston','Matthews','1286 Main St','8269273929','am34@gmail.com','Montreal','Quebec',2,1,3,4,1,1,2,2,1,3,3,1,2,3,1,4,3,0,0,'',-1,-1,-1,0,0,0,0,'',-1,-1,-1,0,0,0,1,0,'',1,3,0,2,4,'Green',1,0,'',-1,-1,-1,4,4,'Red',0,0,'',-1,-1,-1,0,0,'None',-1,-1,0,-1,-1,0,22);");
            query.exec("INSERT INTO clientStorage VALUES(1102,'John','Tavares','235 Cooper Ave','8738384028','jt91@gmail.com','St. Johns','Newfoundland and Labrador',4,2,0,4,1,1,1,4,4,3,2,3,3,3,3,2,1,1,0,'(Bull Terrier)(Chihuahua)(Cocker Spaniel)(German Sheperd)(Golden Retriever)(Greyhound)(Husky)(Pug)(Shih Tzu)(St. Bernard)(Weiner Dog)(Other)',-1,-1,-1,2,4,0,0,'',-1,-1,-1,0,0,0,0,0,'',-1,-1,-1,0,0,'Red',0,0,'',-1,-1,-1,0,0,'Red',0,0,'',-1,-1,-1,0,0,'None',-1,-1,-1,-1,-1,0,34);");
            query.exec("INSERT INTO clientStorage VALUES(1103,'Zach','Hyman','11 Hyman Lane','9999999999','zach11@gmail.com','Charlottetown','Prince Edward Island',2,1,3,2,0,0,0,3,4,2,1,3,1,3,2,2,1,0,0,'',-1,-1,-1,0,0,0,0,'',-1,-1,-1,0,0,0,0,0,'',-1,-1,-1,0,0,'Red',1,0,'(Bearded Dragon)(Chameleon)(Gecko, Leopard)(Monitor, Asian Water)',2,2,1,0,0,'Purple',0,0,'',-1,-1,-1,0,0,'None',-1,-1,-1,1,-1,0,23);");
            query.exec("INSERT INTO clientStorage VALUES(1104,'Hailey','Jacobson','9374 Slater','3778294949','h_jacobson@gmail.com','Ottawa','Ontario',2,1,6,3,1,0,3,2,1,3,2,3,1,4,0,2,2,1,0,'(Cocker Spaniel)(German Sheperd)(Golden Retriever)',2,0,1,0,0,1,0,'',-1,-1,-1,0,0,0,0,0,'',-1,-1,-1,0,0,'Red',1,0,'',-1,-1,-1,0,0,'Red',0,0,'',-1,-1,-1,0,0,'None',1,-1,-1,-1,-1,0,56);");
            query.exec("INSERT INTO clientStorage VALUES(1105,'Morgan','Rielly','3487 Robertson Lane','3489200487','m.riells44@gmail.com','Vancouver','British Columbia',3,2,3,3,1,0,1,3,2,3,1,4,1,0,3,2,2,1,0,'(Bull Terrier)(Chihuahua)',2,2,0,2,1,1,0,'',-1,-1,-1,2,4,1,0,0,'',-1,-1,-1,0,0,'Red',0,0,'',-1,-1,-1,0,0,'Red',1,0,'',-1,-1,-1,2,2,'None',0,-1,-1,-1,-1,3,34);");
            query.exec("INSERT INTO clientStorage VALUES(1106,'Jake','Gardiner','97 Lilly Avenue','3497103740','gardiner51@gmail.com','Thunder Bay','Ontario',4,2,2,3,1,1,0,3,4,2,1,3,2,4,4,2,3,1,0,'(Bull Terrier)(Chihuahua)(Cocker Spaniel)',2,1,1,0,3,0,0,'',-1,-1,-1,0,0,0,0,0,'',-1,-1,-1,0,0,'Red',0,0,'',-1,-1,-1,0,0,'Red',1,0,'',-1,-1,-1,1,2,'None',1,-1,-1,-1,-1,0,63);");
            query.exec("INSERT INTO clientStorage VALUES(1107,'Sally','Stevens','289 Trout Lane','2988239409','ss_trout@gmail.com','Winnipeg','Manitoba',2,1,0,1,0,1,1,2,3,1,3,2,3,2,1,4,2,1,0,'(Bull Terrier)(Chihuahua)(Greyhound)',3,0,1,2,4,0,0,'',-1,-1,-1,0,0,0,0,0,'',-1,-1,-1,0,0,'Red',1,0,'(Chameleon)',1,1,0,2,0,'Pink',0,0,'',-1,-1,-1,0,0,'None',1,-1,-1,0,-1,1,52);");
            query.exec("INSERT INTO clientStorage VALUES(1108,'Bob','Bobberson','23 Light St','2391747294','bobberson_b@gmail.com','Saskatoon','Sakatchewan',2,2,1,0,1,1,1,3,3,3,1,2,0,1,2,1,3,0,0,'',-1,-1,-1,0,0,1,0,'(Burmese)(Cornish Rex)(Egyptian Mau)(Maine Coon)(Russian Blue)',1,1,0,2,4,2,1,0,'',-1,-1,-1,1,3,'Red',1,0,'',-1,-1,-1,3,4,'Red',1,0,'',-1,-1,-1,4,3,'None',-1,1,-1,-1,-1,0,42);");
            query.exec("INSERT INTO clientStorage VALUES(1109,'Chantal','Labelle','298 prom du Portage','2343426234','c.labelle@gmail.com','Quebec','Quebec',2,1,0,4,1,1,3,4,4,3,2,3,2,2,1,3,3,1,0,'(Chihuahua)(Cocker Spaniel)(German Sheperd)',1,1,1,4,4,0,0,'',-1,-1,-1,0,0,0,0,0,'',-1,-1,-1,0,0,'Red',0,0,'',-1,-1,-1,0,0,'Red',1,0,'',-1,-1,-1,2,3,'None',0,-1,-1,-1,-1,3,0);");

            query.exec("INSERT INTO dogStorage VALUES(2105,'Golden Retriever','Goldy',1,1,'M',1,4,4,4,4,3,2,1,4,1,4,4,0,0,'Outdoor','Street Animal',3,0,1,1,'animalPhotos/Goldy.jpg');");
            query.exec("INSERT INTO dogStorage VALUES(2106,'German Sheperd','Germaine',3,6,'F',2,4,3,2,3,1,2,3,1,4,2,0,0,0,'Outdoor','Street Animal',1,4,1,1,'animalPhotos/Germaine.jpg');");
            query.exec("INSERT INTO dogStorage VALUES(2122,'Golden Retriever','Tucker',3,13,'M',2,4,4,4,4,2,1,2,2,1,3,1,0,0,'Indoor/Outdoor','Rescue',1,3,1,1,'animalPhotos/Tucker.jpg');");
            query.exec("INSERT INTO dogStorage VALUES(2123,'Pug','Giselle',1,2,'F',1,4,4,4,4,4,0,0,4,1,3,3,0,0,'Indoor/Outdoor','Rescue',0,0,1,1,'animalPhotos/Giselle.jpg');");
            query.exec("INSERT INTO dogStorage VALUES(2124,'Golden Retriever','Bud',3,4,'M',1,0,2,3,3,1,3,2,3,0,3,2,0,0,'Indoor/Outdoor','Rescue',3,3,1,1,'animalPhotos/Bud.jpg');");

            query.exec("INSERT INTO catStorage VALUES(3100,'Bengal','Cinnamon',1,2,'F',1,1,2,3,2,2,3,3,2,4,1,3,1,1,'Indoor','Brought by owner',4,0,4,'animalPhotos/Cinnamon.jpg');");
            query.exec("INSERT INTO catStorage VALUES(3115,'British Shorthair','Thomas',1,1,'M',1,0,0,3,1,3,4,2,3,2,1,3,0,0,'Indoor','Brought by owner',4,0,2,'animalPhotos/Thomas.jpg');");
            query.exec("INSERT INTO catStorage VALUES(3119,'Maine Coon','Petunia',0,15,'F',1,0,0,0,0,0,0,0,0,0,0,0,0,0,'Outdoor','Street Animal',0,2,0,'animalPhotos/Petunia.jpg');");
            query.exec("INSERT INTO catStorage VALUES(3120,'Scottish Fold','Buster',3,10,'M',1,0,1,3,1,2,1,1,1,2,2,1,0,0,'Indoor','Brought by owner',1,1,2,'animalPhotos/Buster.jpg');");
            query.exec("INSERT INTO catStorage VALUES(3121,'Scottish Fold','Sir Hollingsworth',2,5,'M',2,0,2,1,3,4,2,2,3,1,1,2,0,0,'Indoor/Outdoor','Rescue',4,4,4,'animalPhotos/Sir_Hollingsworth.jpg');");

            query.exec("INSERT INTO birdStorage VALUES(4103,'Cockatoo','Scream',1,4,'F',3,0,1,1,3,2,1,3,2,4,2,1,0,1,'Indoor','Brought by owner',4,4,'White','animalPhotos/Scream.jpg');");
            query.exec("INSERT INTO birdStorage VALUES(4111,'Cockatiel','Tina',1,7,'F',3,0,0,1,1,2,3,1,2,3,2,2,0,0,'Indoor','Brought by owner',4,2,'Green','animalPhotos/Tina.jpg');");
            query.exec("INSERT INTO birdStorage VALUES(4112,'Cockatiel','Pedro',2,12,'M',3,1,2,3,2,3,3,3,3,2,1,3,0,1,'Indoor','Brought by owner',4,4,'Yellow','animalPhotos/Pedro.jpg');");
            query.exec("INSERT INTO birdStorage VALUES(4113,'Macaw','Bella',3,28,'F',3,0,3,2,3,2,3,1,1,1,1,3,0,1,'Indoor','Brought by owner',4,1,'Red','animalPhotos/Bella.jpg');");
            query.exec("INSERT INTO birdStorage VALUES(4114,'Budgy','Caleb',2,0,'M',4,1,2,3,2,1,2,3,4,3,2,1,0,0,'Indoor','Brought by owner',4,4,'Green','animalPhotos/Caleb.jpg');");

            query.exec("INSERT INTO lizardStorage VALUES(5101,'Bearded Dragon','Boswer',2,14,'M',6,1,2,1,3,3,2,4,2,1,3,2,1,1,'Indoor','Brought by owner','Mice','Green','Daily',1,1,'animalPhotos/Bowser.jpg');");
            query.exec("INSERT INTO lizardStorage VALUES(5104,'Chameleon','Kimmy',1,34,'M',5,0,3,3,2,0,1,2,3,2,1,2,1,1,'Indoor','Brought by owner','Crickets','Green','Bi-Weekly',0,1,'animalPhotos/Kimmy.jpg');");
            query.exec("INSERT INTO lizardStorage VALUES(5116,'Other','Sally',0,1,'F',5,4,4,4,4,0,0,0,4,4,4,1,1,0,'Indoor','Brought by owner','Crickets','Brown','Bi-Weekly',0,1,'animalPhotos/Sally.jpg');");
            query.exec("INSERT INTO lizardStorage VALUES(5117,'Iguana, Green','Norma',0,15,'F',6,3,1,2,1,3,3,0,0,3,0,2,0,0,'Indoor','Brought by owner','Crickets','Green','Monthly',0,1,'animalPhotos/Norma.jpg');");
            query.exec("INSERT INTO lizardStorage VALUES(5118,'Gecko, Leopard','Geico',1,10,'M',5,3,3,3,2,1,0,2,4,3,1,2,1,0,'Indoor','Brought by owner','Worms','Green','Daily',0,1,'animalPhotos/Geico.jpg');");

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

/** Function: loadDatabase
 *  Purpose:  loads all clients from the database, creating a
 *               client object for each, and adds it to the internal
 *               clientStorage List
 *            loads all animal objects from each of the animal tables
 *                stored within the database. For each of the animals,
 *                the appropriate animal object is created, and then stored
 *                to the internal AnimalStorage List.
 */
int databaseStorage::loadDatabase(){
    QSqlQuery q;
    QTextStream cerr(stderr);

    /*-------------------------------------------------*
    *           GET CLIENTS FROM DATABASE              *
    * -------------------------------------------------*/
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

        int dwelling = q.value(8).toInt();
        int location = q.value(9).toInt();
        int workSchedule = q.value(10).toInt();
        int activity = q.value(11).toInt();
        int hasChildren = q.value(12).toInt();
        int hasAnimals = q.value(13).toInt();
        int travels = q.value(14).toInt();
        int children = q.value(15).toInt();
        int goodWAnimals = q.value(16).toInt();
        int strangers = q.value(17).toInt();
        int crowds = q.value(18).toInt();
        int noises = q.value(19).toInt();
        int protector = q.value(20).toInt();
        int energy = q.value(21).toInt();
        int fearful = q.value(22).toInt();
        int affection = q.value(23).toInt();
        int messy = q.value(24).toInt();

        int wantsDog = q.value(25).toInt();
        int hasDogAllergies = q.value(26).toInt();
        QString dogBreeds = q.value(27).toString();
        int dogAge = q.value(28).toInt();
        int dogSize = q.value(29).toInt();
        int dogGender = q.value(30).toInt();
        int followsCommandsDog = q.value(31).toInt();
        int houseTrained = q.value(32).toInt();

        int wantsCat = q.value(33).toInt();
        int hasCatAllergies = q.value(34).toInt();
        QString catBreeds = q.value(35).toString();
        int catAge = q.value(36).toInt();
        int catSize = q.value(37).toInt();
        int catGender = q.value(38).toInt();
        int isCurious = q.value(39).toInt();
        int followCommandsCat = q.value(40).toInt();
        int doesntShed = q.value(41).toInt();

        int wantsBird = q.value(42).toInt();
        int hasBirdAllergies = q.value(43).toInt();
        QString birdBreeds = q.value(44).toString();
        int birdAge = q.value(45).toInt();
        int birdSize = q.value(46).toInt();
        int birdGender = q.value(47).toInt();
        int isQuietBird = q.value(48).toInt();
        int isSocialBird = q.value(49).toInt();
        QString birdColour = q.value(50).toString();

        int wantsLizard = q.value(51).toInt();
        int hasLizardAllergies = q.value(52).toInt();
        QString lizardBreeds = q.value(53).toString();
        int lizardAge = q.value(54).toInt();
        int lizardSize = q.value(55).toInt();
        int lizardGender = q.value(56).toInt();
        int easyToFeed = q.value(57).toInt();
        int simpleLiving = q.value(58).toInt();
        QString lizardColour = q.value(59).toString();

        int wantsRabbit = q.value(60).toInt();
        int hasRabbitAllergies = q.value(61).toInt();
        QString rabbitBreeds = q.value(62).toString();
        int rabbitAge = q.value(63).toInt();
        int rabbitSize = q.value(64).toInt();
        int rabbitGender = q.value(65).toInt();
        int isSocialRabbit = q.value(66).toInt();
        int needsGrooming = q.value(67).toInt();
        QString rabbitColour = q.value(68).toString();

        int dogFur = q.value(69).toInt();
        int catFur = q.value(70).toInt();
        int birdFur = q.value(71).toInt();
        int lizardFur = q.value(72).toInt();
        int rabbitFur = q.value(73).toInt();
        int quietness = q.value(74).toInt();
        int age = q.value(75).toInt();

        Client *c = new Client;

        std::vector<std::string> dogB, catB, birdB, lizB, rabB;
        dogB = c->parseBreedsStr(dogBreeds.toStdString());
        catB = c->parseBreedsStr(catBreeds.toStdString());
        birdB = c->parseBreedsStr(birdBreeds.toStdString());
        lizB = c->parseBreedsStr(lizardBreeds.toStdString());
        rabB = c->parseBreedsStr(rabbitBreeds.toStdString());

        c->setClientAttributes(fName.toStdString(), lName.toStdString(), add.toStdString(), phone.toStdString(), email.toStdString(), city.toStdString(), prov.toStdString(), dwelling,  location,  workSchedule, activity,  hasChildren, hasAnimals,  travels,  children,  goodWAnimals,  strangers, crowds,  noises,  protector,  energy,  fearful,  affection, messy, wantsDog,  hasDogAllergies,  dogB,  dogAge,  dogSize,  dogGender, followsCommandsDog,  houseTrained, wantsCat,  hasCatAllergies,  catB,  catAge,  catSize,  catGender, isCurious,  followCommandsCat,  doesntShed, wantsBird,  hasBirdAllergies,  birdB,  birdAge,  birdSize,  birdGender, isQuietBird, isSocialBird, birdColour.toStdString(), wantsLizard, hasLizardAllergies,  lizB,  lizardAge,  lizardSize,  lizardGender, easyToFeed,  simpleLiving,  lizardColour.toStdString(), wantsRabbit,  hasRabbitAllergies,  rabB,  rabbitAge,  rabbitSize,  rabbitGender, isSocialRabbit,  needsGrooming,  rabbitColour.toStdString(), dogFur,  catFur,  birdFur,  lizardFur,  rabbitFur,  quietness,  age);
        c->setIdNumber(std::stoi((std::to_string(id).substr(1))));
        (*clientStorage).add(c);
       }


    /*-------------------------------------------------*
     *           GET DOGS FROM DATABASE                *
     *-------------------------------------------------*/

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
    }

    /*-------------------------------------------------*
     *           GET CATS FROM DATABASE                *
     *-------------------------------------------------*/

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
        int shed = q.value(24).toInt();
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
    }

    /*-------------------------------------------------*
     *           GET LIZARDS FROM DATABASE             *
     *-------------------------------------------------*/

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
    }

    /*-------------------------------------------------*
     *           GET BIRDS FROM DATABASE               *
     *-------------------------------------------------*/

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
    }

    /*-------------------------------------------------*
     *           GET RABBITS FROM DATABASE             *
     *-------------------------------------------------*/

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
        int grooming = q.value(24).toInt();
        int attention = q.value(25).toInt();
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
    }

    numClients = getNumberOfClients();
    numAnimals = getNumberOfAnimals();

    return 0;
}

/** Function: getNumberOfAnimals()
 *  Out: number of animals in the database
 *  Purpose: queries the database and returns the
 *              number of animals in persistant storage
 *              Queries each of the animal tables and sums the total
 */
int databaseStorage::getNumberOfAnimals(){

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

    return n;
}
/** Function: getNumberOfClients
 *  Out: number of clients in the database
 *  Purpose: queries the database and returns the
 *              number of clients in persistant storage
 */
int databaseStorage::getNumberOfClients(){
    QSqlQuery query;

    query.exec("select count (*) from clientStorage;");
    query.first();
    return query.value(0).toInt();
}

/** Function: addClientToDatabase()
 *  In: a client, to be saved in persistant storage
 *  Purpose: adds a client, and all it's attributes to
 *              the database connected to the software
 */
int databaseStorage::addClientToDatabase(Client *c){

    QSqlQuery query;
    QTextStream cerr(stderr);

    query.prepare("INSERT INTO clientStorage(idNum, fName, lName, address, phone, email, city, prov, "
                  "dwelling, location, workSchedule, activity, hasChildren, hasAnimals, travels, children, "
                  "goodWAnimals, strangers, crowds, noises, protector, energy, fearful, affection, messy, "
                  "wantsDog, hasDogAllergies, dogBreeds, dogAge, dogSize, dogGender, followsCommandsDog, houseTrained, "
                  "wantsCat, hasCatAllergies, catBreeds, catAge, catSize, catGender, isCurious, followCommandsCat, doesntShed,"
                  " wantsBird, hasBirdAllergies, birdBreeds, birdAge, birdSize, birdGender, isQuietBird, isSocialBird, birdColour,"
                  " wantsLizard, hasLizardAllergies, lizardBreeds, lizardAge, lizardSize, lizardGender, easyToFeed, simpleLiving, lizardColour, "
                  "wantsRabbit, hasRabbitAllergies, rabbitBreeds, rabbitAge, rabbitSize, rabbitGender, isSocialRabbit, needsGrooming, rabbitColour,"
                  " dogFur, catFur, birdFur, lizardFur, rabbitFur, quietness, age) VALUES (:idNum, :fName, :lName, :address, :phone, :email, :city, :prov, :dwelling, :location, :workSchedule, :activity, :hasChildren, :hasAnimals, :travels, :children, :goodWAnimals, :strangers, :crowds, :noises, :protector, :energy, :fearful, :affection, :messy, :wantsDog, :hasDogAllergies, :dogBreeds, :dogAge, :dogSize, :dogGender, :followsCommandsDog, :houseTrained, :wantsCat, :hasCatAllergies, :catBreeds, :catAge, :catSize, :catGender, :isCurious, :followCommandsCat, :doesntShed, :wantsBird, :hasBirdAllergies, :birdBreeds, :birdAge, :birdSize, :birdGender, :isQuietBird, :isSocialBird, :birdColour, :wantsLizard, :hasLizardAllergies, :lizardBreeds, :lizardAge, :lizardSize, :lizardGender, :easyToFeed, :simpleLiving, :lizardColour, :wantsRabbit, :hasRabbitAllergies, :rabbitBreeds, :rabbitAge, :rabbitSize, :rabbitGender, :isSocialRabbit, :needsGrooming, :rabbitColour, :dogFur, :catFur, :birdFur, :lizardFur, :rabbitFur, :quietness, :age)");

        query.bindValue(":idNum", c->getId());
        query.bindValue(":fName", QString::fromStdString(c->getFirstName()));
        query.bindValue(":lName", QString::fromStdString(c->getLastName()));
        query.bindValue(":address", QString::fromStdString(c->getAddress()));
        query.bindValue(":phone", QString::fromStdString(c->getPhoneNum()));
        query.bindValue(":email", QString::fromStdString(c->getEmail()));
        query.bindValue(":city", QString::fromStdString(c->getCity()));
        query.bindValue(":prov", QString::fromStdString(c->getProvince()));

        query.bindValue(":dwelling", c->getDwelling());
        query.bindValue(":location", c->getLocation());
        query.bindValue(":workSchedule", c->getWorkSchedule());
        query.bindValue(":activity", c->getActivity());
        query.bindValue(":hasChildren", c->getHasChildren());
        query.bindValue(":hasAnimals", c->getHasAnimals());
        query.bindValue(":travels", c->getTravels());
        query.bindValue(":children", c->getChildren());

        query.bindValue(":goodWAnimals", c->getGoodWAnimals());
        query.bindValue(":strangers", c->getStrangers());
        query.bindValue(":crowds", c->getCrowds());
        query.bindValue(":noises", c->getNoises());
        query.bindValue(":protector", c->getProtector());
        query.bindValue(":energy", c->getEnergy());
        query.bindValue(":fearful", c->getFearful());
        query.bindValue(":affection", c->getAffection());
        query.bindValue(":messy", c->getMessy());

        query.bindValue(":wantsDog", c->getWantsDog());
        query.bindValue(":hasDogAllergies", c->getHasDogAllergies());
        query.bindValue(":dogBreeds", QString::fromStdString(c->getDogBreedStr()));
        query.bindValue(":dogAge", c->getDogAge());
        query.bindValue(":dogSize", c->getDogSize());
        query.bindValue(":dogGender", c->getDogGender());
        query.bindValue(":followsCommandsDog", c->getFollowsCommandsDog());
        query.bindValue(":houseTrained", c->getHouseTrained());

        query.bindValue(":wantsCat", c->getWantsCat());
        query.bindValue(":hasCatAllergies", c->getHasCatAllergies());
        query.bindValue(":catBreeds", QString::fromStdString(c->getCatBreedStr()));
        query.bindValue(":catAge", c->getCatAge());
        query.bindValue(":catSize", c->getCatSize());
        query.bindValue(":catGender", c->getCatGender());
        query.bindValue(":isCurious", c->getIsCurious());
        query.bindValue(":followCommandsCat", c->getFollowCommandsCat());
        query.bindValue(":doesntShed", c->getDoesntShed());

        query.bindValue(":wantsBird", c->getWantsBird());
        query.bindValue(":hasBirdAllergies", c->getHasBirdAllergies());
        query.bindValue(":birdBreeds", QString::fromStdString(c->getBirdBreedStr()));
        query.bindValue(":birdAge", c->getBirdAge());
        query.bindValue(":birdSize", c->getBirdSize());
        query.bindValue(":birdGender", c->getBirdGender());
        query.bindValue(":isQuietBird", c->getIsQuietBird());
        query.bindValue(":isSocialBird", c->getIsSocialBird());
        query.bindValue(":birdColour", QString::fromStdString(c->getBirdColour()));

        query.bindValue(":wantsLizard", c->getWantsLizard());
        query.bindValue(":hasLizardAllergies", c->getHasLizardAllergies());
        query.bindValue(":lizardBreeds", QString::fromStdString(c->getLizardBreedStr()));
        query.bindValue(":lizardAge", c->getLizardAge());
        query.bindValue(":lizardSize", c->getLizardSize());
        query.bindValue(":lizardGender", c->getLizardGender());
        query.bindValue(":easyToFeed", c->getEasyToFeed());
        query.bindValue(":simpleLiving", c->getSimpleLiving());
        query.bindValue(":lizardColour", QString::fromStdString(c->getLizardColour()));

        query.bindValue(":wantsRabbit", c->getWantsRabbit());
        query.bindValue(":hasRabbitAllergies", c->getHasRabbitAllergies());
        query.bindValue(":rabbitBreeds", QString::fromStdString(c->getRabbitBreedStr()));
        query.bindValue(":rabbitAge", c->getRabbitAge());
        query.bindValue(":rabbitSize", c->getRabbitSize());
        query.bindValue(":rabbitGender", c->getRabbitGender());
        query.bindValue(":isSocialRabbit", c->getIsSocialRabbit());
        query.bindValue(":needsGrooming", c->getNeedsGrooming());
        query.bindValue(":rabbitColour", QString::fromStdString(c->getRabbitColour()));

        query.bindValue(":dogFur", c->getDogFur());
        query.bindValue(":catFur", c->getCatFur());
        query.bindValue(":birdFur", c->getBirdFur());
        query.bindValue(":lizardFur", c->getLizardFur());
        query.bindValue(":rabbitFur", c->getRabbitFur());
        query.bindValue(":quietness", c->getQuietness());
        query.bindValue(":age", c->getAge());

    if(query.exec()) {
           cerr << "CLIENT ADDED TO TABLE";
       }
       else{

        cerr << "ERROR ADDING \n";
         qDebug() << "addPerson error:"
                         << query.lastError();
       }

    return 0;
}

/** Function: addDogToDatabase()
 *  In: a dog, to be saved in persistant storage
 *  Purpose: adds a dog, and all it's attributes to
 *              the database connected to the software
 */
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

/** Function: addBirdToDatabase()
 *  In: a bird, to be saved in persistant storage
 *  Purpose: adds a bird, and all it's attributes to
 *               the database connected to the software
 */
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

/** Function: addLizzardToDatabase()
 *  In: a lizzard, to be saved in persistant storage
 *  Purpose: adds a lizzard, and all it's attributes to
 *               the database connected to the software
 */
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

/** Function: addCatToDatabase()
 *  In: a cat, to be saved in persistant storage
 *  Purpose: adds a cat, and all it's attributes to
 *               the database connected to the software
 */
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

/** Function: addRabbitToDatabase()
 *  In: a rabbit, to be saved in persistant storage
 *  Purpose: adds a rabbit, and all it's attributes to
 *               the database connected to the software
 */
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

/** Function: editClientInDB()
 *  In: a client object that has been edited, via the UI
 *  Purpose: saves the edited details of a client into
 *               persistant storage.
 */
int databaseStorage::editClientInDB(Client *c){

    QTextStream cerr(stderr);
    QSqlQuery query;
    cerr << "EDIT my client\n";
    query.prepare("UPDATE clientStorage SET fName = :fName, lName = :lName, address = :address, phone = :phone, email = :email, city = :city, prov = :prov, dwelling = :dwelling, "
                  "location = :location, workSchedule = :workSchedule, activity = :activity, hasChildren = :hasChildren, hasAnimals = :hasAnimals, travels = :travels, children = :children, goodWAnimals = :goodWAnimals, strangers = :strangers, crowds = :crowds, noises = :noises, protector = :protector, energy = :energy, "
                  "fearful = :fearful, affection = :affection, messy = :messy, wantsDog = :wantsDog, hasDogAllergies = :hasDogAllergies, dogBreeds = :dogBreeds, dogAge = :dogAge, dogSize = :dogSize, dogGender = :dogGender, followsCommandsDog = :followsCommandsDog, houseTrained = :houseTrained, wantsCat = :wantsCat, "
                  "hasCatAllergies = :hasCatAllergies, catBreeds = :catBreeds, catAge = :catAge, catSize = :catSize, catGender = :catGender, isCurious = :isCurious, followCommandsCat = :followCommandsCat, doesntShed = :doesntShed, wantsBird = :wantsBird, hasBirdAllergies = :hasBirdAllergies, birdBreeds = :birdBreeds, "
                  "birdAge = :birdAge, birdSize = :birdSize, birdGender = :birdGender, isQuietBird = :isQuietBird, isSocialBird = :isSocialBird, birdColour = :birdColour, wantsLizard = :wantsLizard, hasLizardAllergies = :hasLizardAllergies, lizardBreeds = :lizardBreeds, lizardAge = :lizardAge, lizardSize = :lizardSize, "
                  "lizardGender = :lizardGender, easyToFeed = :easyToFeed, simpleLiving = :simpleLiving, lizardColour = :lizardColour, wantsRabbit = :wantsRabbit, hasRabbitAllergies = :hasRabbitAllergies, rabbitBreeds = :rabbitBreeds, rabbitAge = :rabbitAge, rabbitSize = :rabbitSize, rabbitGender = :rabbitGender, "
                  "isSocialRabbit = :isSocialRabbit, needsGrooming = :needsGrooming, rabbitColour = :rabbitColour, dogFur = :dogFur, catFur = :catFur, birdFur = :birdFur, lizardFur = :lizardFur, rabbitFur = :rabbitFur, quietness = :quietness, age = :age  WHERE idNum = :idNum");

    query.bindValue(":idNum", c->getId());
    query.bindValue(":fName", QString::fromStdString(c->getFirstName()));
    query.bindValue(":lName", QString::fromStdString(c->getLastName()));
    query.bindValue(":address", QString::fromStdString(c->getAddress()));
    query.bindValue(":phone", QString::fromStdString(c->getPhoneNum()));
    query.bindValue(":email", QString::fromStdString(c->getEmail()));
    query.bindValue(":city", QString::fromStdString(c->getCity()));
    query.bindValue(":prov", QString::fromStdString(c->getProvince()));

    query.bindValue(":dwelling", c->getDwelling());
    query.bindValue(":location", c->getLocation());
    query.bindValue(":workSchedule", c->getWorkSchedule());
    query.bindValue(":activity", c->getActivity());
    query.bindValue(":hasChildren", c->getHasChildren());
    query.bindValue(":hasAnimals", c->getHasAnimals());
    query.bindValue(":travels", c->getTravels());
    query.bindValue(":children", c->getChildren());

    query.bindValue(":goodWAnimals", c->getGoodWAnimals());
    query.bindValue(":strangers", c->getStrangers());
    query.bindValue(":crowds", c->getCrowds());
    query.bindValue(":noises", c->getNoises());
    query.bindValue(":protector", c->getProtector());
    query.bindValue(":energy", c->getEnergy());
    query.bindValue(":fearful", c->getFearful());
    query.bindValue(":affection", c->getAffection());
    query.bindValue(":messy", c->getMessy());

    query.bindValue(":wantsDog", c->getWantsDog());
    query.bindValue(":hasDogAllergies", c->getHasDogAllergies());
    query.bindValue(":dogBreeds", QString::fromStdString(c->getDogBreedStr()));
    query.bindValue(":dogAge", c->getDogAge());
    query.bindValue(":dogSize", c->getDogSize());
    query.bindValue(":dogGender", c->getDogGender());
    query.bindValue(":followsCommandsDog", c->getFollowsCommandsDog());
    query.bindValue(":houseTrained", c->getHouseTrained());

    query.bindValue(":wantsCat", c->getWantsCat());
    query.bindValue(":hasCatAllergies", c->getHasCatAllergies());
    query.bindValue(":catBreeds", QString::fromStdString(c->getCatBreedStr()));
    query.bindValue(":catAge", c->getCatAge());
    query.bindValue(":catSize", c->getCatSize());
    query.bindValue(":catGender", c->getCatGender());
    query.bindValue(":isCurious", c->getIsCurious());
    query.bindValue(":followCommandsCat", c->getFollowCommandsCat());
    query.bindValue(":doesntShed", c->getDoesntShed());

    query.bindValue(":wantsBird", c->getWantsBird());
    query.bindValue(":hasBirdAllergies", c->getHasBirdAllergies());
    query.bindValue(":birdBreeds", QString::fromStdString(c->getBirdBreedStr()));
    query.bindValue(":birdAge", c->getBirdAge());
    query.bindValue(":birdSize", c->getBirdSize());
    query.bindValue(":birdGender", c->getBirdGender());
    query.bindValue(":isQuietBird", c->getIsQuietBird());
    query.bindValue(":isSocialBird", c->getIsSocialBird());
    query.bindValue(":birdColour", QString::fromStdString(c->getBirdColour()));

    query.bindValue(":wantsLizard", c->getWantsLizard());
    query.bindValue(":hasLizardAllergies", c->getHasLizardAllergies());
    query.bindValue(":lizardBreeds", QString::fromStdString(c->getLizardBreedStr()));
    query.bindValue(":lizardAge", c->getLizardAge());
    query.bindValue(":lizardSize", c->getLizardSize());
    query.bindValue(":lizardGender", c->getLizardGender());
    query.bindValue(":easyToFeed", c->getEasyToFeed());
    query.bindValue(":simpleLiving", c->getSimpleLiving());
    query.bindValue(":lizardColour", QString::fromStdString(c->getLizardColour()));

    query.bindValue(":wantsRabbit", c->getWantsRabbit());
    query.bindValue(":hasRabbitAllergies", c->getHasRabbitAllergies());
    query.bindValue(":rabbitBreeds", QString::fromStdString(c->getRabbitBreedStr()));
    query.bindValue(":rabbitAge", c->getRabbitAge());
    query.bindValue(":rabbitSize", c->getRabbitSize());
    query.bindValue(":rabbitGender", c->getRabbitGender());
    query.bindValue(":isSocialRabbit", c->getIsSocialRabbit());
    query.bindValue(":needsGrooming", c->getNeedsGrooming());
    query.bindValue(":rabbitColour", QString::fromStdString(c->getRabbitColour()));

    query.bindValue(":dogFur", c->getDogFur());
    query.bindValue(":catFur", c->getCatFur());
    query.bindValue(":birdFur", c->getBirdFur());
    query.bindValue(":lizardFur", c->getLizardFur());
    query.bindValue(":rabbitFur", c->getRabbitFur());
    query.bindValue(":quietness", c->getQuietness());
    query.bindValue(":age", c->getAge());

    if(query.exec()) {
           cerr << "CLIENT EDIT SUCCESS\n" << "\n";
       }
       else{
        cerr << "ERROR EDITING Client \n";
         qDebug() << "editClient error:"
                         << query.lastError();
       }

    return 0;
}

/** Function: editDogInDB()
 *  In: a dog object that has been edited, via the UI
 *  Purpose: saves the edited details of a dog into
 *               persistant storage.
 */
int databaseStorage::editDogInDB(Dog *a){
    QTextStream cerr(stderr);
    QSqlQuery query;
    cerr << "EDIT my dog\n";
    query.prepare("UPDATE dogStorage SET breed = :breed, name = :name, size = :size, age = :age, gender = :gender, fur = :fur, travels = :travels, children = :children, goodWithAnimals = :goodWithAnimals, strangers = :strangers, crowds = :crowds, noises = :noises, protector = :protector, energy = :energy, fearful = :fearful, affection = :affection, messy = :messy, nocturnal = :nocturnal, hypo = :hypo, lifeStyle = :lifestyle, history = :history, barks = :barks, training = :training, bathroomTrained = :bathroomTrained, goodBoy = :goodBoy, filepath = :filepath WHERE idNum = :idNum");

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
           cerr << "DOG EDIT SUCCESS\n" << "\n";
       }
       else{
        cerr << "ERROR EDITING DOG \n";
         qDebug() << "editDog error:"
                         << query.lastError();
       }

    return 0;
}

/** Function: editCatInDB()
 *  In: a cat object that has been edited, via the UI
 *  Purpose: saves the edited details of a cat into
 *               persistant storage.
 */
int databaseStorage::editCatInDB(Cat *a){
    QTextStream cerr(stderr);
    QSqlQuery query;
    cerr << "EDIT my dog\n";
    query.prepare("UPDATE catStorage SET breed = :breed, name = :name, size = :size, age = :age, gender = :gender, fur = :fur, travels = :travels, children = :children, goodWithAnimals = :goodWithAnimals, strangers = :strangers, crowds = :crowds, noises = :noises, protector = :protector, energy = :energy, fearful = :fearful, affection = :affection, messy = :messy, nocturnal = :nocturnal, hypo = :hypo, lifeStyle = :lifestyle, history = :history, curiosity = :curiosity, trained = :trained, shedding = :shedding, filepath = :filepath WHERE idNum = :idNum");

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
           cerr << "DOG EDIT SUCCESS" << "\n";
       }
       else{
        cerr << "ERROR EDITING Dog \n";
         qDebug() << "editDog error:"
                         << query.lastError();
       }

    return 0;
}

/** Function: editBirdInDB()
 *  In: a bird object that has been edited, via the UI
 *  Purpose: saves the edited details of a bird into
 *               persistant storage.
 */
int databaseStorage::editBirdInDB(Bird *a){
    QTextStream cerr(stderr);
    QSqlQuery query;
    cerr << "EDIT my bird\n";
    query.prepare("UPDATE birdStorage SET breed = :breed, name = :name, size = :size, age = :age, gender = :gender, fur = :fur, travels = :travels, children = :children, goodWithAnimals = :goodWithAnimals, strangers = :strangers, crowds = :crowds, noises = :noises, protector = :protector, energy = :energy, fearful = :fearful, affection = :affection, messy = :messy, nocturnal = :nocturnal, hypo = :hypo, lifeStyle = :lifestyle, history = :history, loud = :loud, social = :social, colour = :colour, filepath = :filepath WHERE idNum = :idNum");

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
           cerr << "BIRD EDIT SUCCESS\n" << "\n";
       }
       else{
        cerr << "ERROR EDITING BIRD \n";
         qDebug() << "editBIRD error:"
                         << query.lastError();
       }

    return 0;
}

/** Function: editLizardInDB()
 *  In: a lizard object that has been edited, via the UI
 *  Purpose: saves the edited details of a lizard into
 *               persistant storage.
 */
int databaseStorage::editLizardInDB(Lizard *a){
    QTextStream cerr(stderr);
    QSqlQuery query;
    cerr << "EDIT my lizard\n";
    query.prepare("UPDATE lizardStorage SET breed = :breed, name = :name, size = :size, age = :age, gender = :gender, fur = :fur, travels = :travels, children = :children, goodWithAnimals = :goodWithAnimals, strangers = :strangers, crowds = :crowds, noises = :noises, protector = :protector, energy = :energy, fearful = :fearful, affection = :affection, messy = :messy, nocturnal = :nocturnal, hypo = :hypo, lifeStyle = :lifestyle, history = :history, diet = :diet, colour = :colour, feed = :feed, space = :space, light = :light, filepath = :filepath WHERE idNum = :idNum");

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
           cerr << "LIZARD EDIT SUCCESS\n" << "\n";
       }
       else{
        cerr << "ERROR EDITING Lizard \n";
         qDebug() << "editLizard error:"
                         << query.lastError();
       }

    return 0;
}

/** Function: editRabbitInDB()
 *  In: a rabbit object that has been edited, via the UI
 *  Purpose: saves the edited details of a rabbit into
 *               persistant storage.
 */
int databaseStorage::editRabbitInDB(Rabbit *a){

    QTextStream cerr(stderr);
    QSqlQuery query;
    cerr << "EDIT my rabbit\n";
    query.prepare("UPDATE rabbitStorage SET breed = :breed, name = :name, size = :size, age = :age, gender = :gender, fur = :fur, travels = :travels, children = :children, goodWithAnimals = :goodWithAnimals, strangers = :strangers, crowds = :crowds, noises = :noises, protector = :protector, energy = :energy, fearful = :fearful, affection = :affection, messy = :messy, nocturnal = :nocturnal, hypo = :hypo, lifeStyle = :lifestyle, history = :history, pattern = :pattern, colour = :colour, grooming = :grooming, attention = :attention, filepath = :filepath WHERE idNum = :idNum");

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
    cerr << "Grooming is: " <<a->getGrooming() << "\n";
    query.bindValue(":attention", a->getAttention());
    query.bindValue(":filepath", QString::fromStdString(a->getImageFilePath()));

    if(query.exec()) {
           cerr << "RABBIT EDIT SUCCESS\n" << "\n";
       }
       else{
        cerr << "ERROR EDITING Rabbit \n";
         qDebug() << "editRabbit error:"
                         << query.lastError();
       }

    return 0;
}

/** Function: lifeStyleToInt()
 *  In: a QString representing an animals lifestyle
 *  Out: returns the equiv. integer value to be passed into
 *              the constructor for an animal.
 *  Purpose: converts a string representation of an animals
 *              lifestyle into a integer version to pass
 *              into the c-tor.
 */
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

/** Function: historyToInt()
 *  In: a QString representing an animals history
 *  Out: returns the equiv. integer value to be passed into
 *              the constructor for an animal.
 *  Purpose: converts a string representation of an animals
 *              history into a integer version to pass
 *              into the c-tor.
 */
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

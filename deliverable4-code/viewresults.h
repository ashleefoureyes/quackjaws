#ifndef VIEWRESULTS_H
#define VIEWRESULTS_H

#include <QDialog>
#include <map>
#include <vector>
#include <QListWidget>
#include <QTextStream>
#include <QMessageBox>

#include "animal.h"
#include "client.h"
#include "match.h"

namespace Ui {
class ViewResults;
}

class ViewResults : public QDialog
{
    Q_OBJECT

public:
    explicit ViewResults(QWidget *parent = nullptr);
    ~ViewResults();
     void showMatchUi(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches, int numOfAnimals, int numOfClients);

private slots:
     void on_listClientsDetailed_itemClicked(QListWidgetItem *item);
     void on_listAnimalsDetailed_itemClicked(QListWidgetItem *item);
     void on_buttonNext_clicked();
     void on_buttonBack_clicked();
     void on_buttonDetailedMatchInfo_clicked();
     void on_listOptimalMatches_currentRowChanged(int currentRow);

private:
    Ui::ViewResults *ui;
    std::map<int, std::vector<Match*>> *matches;
    std::vector<Match*> *optimalMatches;
    std::vector<Match*> matchesForClient;

    int detailedId;

    void populateClientQList();
    void populateAnimalQList(int id);
    void displayMatchInfo(Match* match);
    void setDetailedDefault();
    void displayTextBoxError(QString err);
};

#endif // VIEWRESULTS_H

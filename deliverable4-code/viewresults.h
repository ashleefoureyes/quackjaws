#ifndef VIEWRESULTS_H
#define VIEWRESULTS_H

#include <QDialog>
#include <map>
#include <vector>
#include <QListWidget>
#include <QTextStream>

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
     void showMatchUi(std::map<int, std::vector<Match*>> *matches, std::vector<Match*> *optimalMatches);

private slots:
     void on_listClientsDetailed_itemClicked(QListWidgetItem *item);

private:
    Ui::ViewResults *ui;
    std::map<int, std::vector<Match*>> *matches;
    std::vector<Match*> *optimalMatches;
    std::vector<Match*> matchesForClient;

    void populateClientQList();
    void populateAnimalQList(int id);
};

#endif // VIEWRESULTS_H

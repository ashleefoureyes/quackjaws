#ifndef VIEWRESULTS_H
#define VIEWRESULTS_H

#include <QDialog>
#include <map>
#include <vector>
#include <QListWidget>

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

private:
    Ui::ViewResults *ui;
    std::map<int, std::vector<Match*>> *matches;
    std::vector<Match*> *optimalMatches;
    std::vector<Match*> *matchesForClient = nullptr;

    void populateClientQList();
};

#endif // VIEWRESULTS_H

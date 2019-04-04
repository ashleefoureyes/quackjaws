#ifndef VIEWMATCHES_H
#define VIEWMATCHES_H

#include <QWidget>

namespace Ui {
class ViewMatches;
}

class ViewMatches : public QWidget
{
    Q_OBJECT

public:
    explicit ViewMatches(QWidget *parent = nullptr);
    ~ViewMatches();

private:
    Ui::ViewMatches *ui;
};

#endif // VIEWMATCHES_H

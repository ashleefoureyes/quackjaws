#include "viewmatches.h"
#include "ui_viewmatches.h"

ViewMatches::ViewMatches(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewMatches)
{
    ui->setupUi(this);
}

ViewMatches::~ViewMatches()
{
    delete ui;
}

#include "addanimal.h"
#include "ui_addanimal.h"

AddAnimal::AddAnimal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAnimal)
{
    ui->setupUi(this);
}

AddAnimal::~AddAnimal()
{
    delete ui;
}

bool AddAnimal::createNewAnimal(Animal *newAnimal)
{
    this->exec();
    return true;
}

void AddAnimal::on_bUpload_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Animal Image"), "", tr("Images(*.png *.jpg *.jpeg)"));

    // If no image, return
    if(QString::compare(filename, QString()) == 0) { return; }

    QImage image;

    // Checks to make sure image is not corrupted
    bool validImage = image.load(filename);
    if(validImage == false) { return; }

    image = image.scaledToWidth(ui->lbAnimalPhoto->width(), Qt::SmoothTransformation);
    ui->lbAnimalPhoto->setPixmap(QPixmap::fromImage(image));
}

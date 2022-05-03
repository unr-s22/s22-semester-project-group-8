#ifndef WAVEFILEEDITOR_H
#define WAVEFILEEDITOR_H

#include <QMainWindow>
#include <Controller.h>

QT_BEGIN_NAMESPACE
namespace Ui { class WaveFileEditor; }
QT_END_NAMESPACE

class WaveFileEditor : public QMainWindow
{
    Q_OBJECT

public:
    WaveFileEditor(QWidget *parent = nullptr);
    ~WaveFileEditor();

private slots:
    void on_exit_1_clicked();

    void on_confirm_1_clicked();

    void on_confirm_2_clicked();

    void on_exit_2_clicked();

    void on_next_1_clicked();

    void on_back_2_clicked();

private:
    Ui::WaveFileEditor *ui;
    Controller control;
};
#endif // WAVEFILEEDITOR_H

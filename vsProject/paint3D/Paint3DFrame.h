#ifndef PAINT3D_H
#define PAINT3D_H

#include <QtGui/QMainWindow>
#include "ui_mainWindow.h"

class Paint3DFrame : public QMainWindow, public Ui::MainWindow
{
	Q_OBJECT
public:
	Paint3DFrame(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Paint3DFrame();

	static QSharedPointer<Scene> scene;
	void updateGLView();
private slots:
	void importModel();
	void selectTool();
	void selectFaceTool();
	void moveTool();
	void rotateTool();
	void scaleTool();
	void focusTool();
	void paintTool();
	void openFile();
	void saveFile();
	void newFile();

	void refreshView();
	void createPlaneLocator();

	void showAboutWindow();
private:
	QActionGroup *actionGroup;
	QAction* undoAction;
	QAction* redoAction;
};

extern Paint3DFrame* paint3DApp;
#endif // PAINT3D_H

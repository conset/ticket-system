#include "ticketsystem.h"

ticketsystem::ticketsystem(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void ticketsystem::on_pushButton_clicked()
{
	int *pTicket;	// TODO Point to the array that saves the ticket information

	QString totalNumText = ui.lineEdit->text;
	if (VerifyNumber(totalNumText)) {
		int totalNum = totalNumText.toInt();
		
		// set up two windows
		win1.biz = new CTicketBiz(pTicket, totalNum);

	}
	else {

	}
	
}
bool VerifyNumber(QString str)
{
	std::string temp = str.toStdString();
	for (int i = 0; i < str.length(); i++)
	{
		if (temp[i]<'0' || temp[i]>'9')
		{
			return false;
		}
	}
	return true;
}

void ticketsystem::createThread()
{
	
}

void ticketsystem::initialCriticalSection()
{
}

void ticketsystem::enterCriticalSection()
{
}

void ticketsystem::leaveCriticalSection()
{
}

void ticketsystem::onTimer()
{
}

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
		
		// set up window1
		win1.biz = new CTicketBiz(pTicket, totalNum);
		win1.wndShow = ui.textBrowser;
		win1.win_no = 1;
		win1.service = false;
		// set up window2
		win2.biz = new CTicketBiz(pTicket, totalNum);
		win2.wndShow = ui.textBrowser_2;
		win2.win_no = 2;
		win2.service = false;
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

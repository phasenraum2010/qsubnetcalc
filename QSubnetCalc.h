/**
 * QSubnetCalc.h -- Class for the Main Window. 
 *                  Inherits from the Class QSCMainWindow 
 *                  which is generated by Qt-Designer and moc/uic
 *
 * Copyright (c) 2002 Thomas Woehlke
 * Licensed under the GNU GPL. For full terms see the file COPYRIGHT.
 *
 * http://qsubnetcalc.sourceforge.net
 *
 * $Id: QSubnetCalc.h,v 1.1.1.1 2002/11/26 21:01:35 rubycon Exp $
 */

#ifndef __QSUBNETCALC__
#define __QSUBNETCALC__

#include "QSCMainWindow.h"
#include "ComputeSubnetData.h"

class QSubnetCalc:public QSCMainWindow
{
	public:
		QSubnetCalc(QWidget* parent = 0, const char* name = 0, Qt::WFlags fl = 0 );
		~QSubnetCalc();
	public slots:
		virtual void calculate();
    virtual void clear();
	private: 
		ComputeSubnetData * calc;
};

#endif

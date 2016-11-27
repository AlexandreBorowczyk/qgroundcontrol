/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


#ifndef ParameterManagerTest_H
#define ParameterManagerTest_H

#include "UnitTest.h"
#include "MockLink.h"
#include "MultiSignalSpy.h"
#include "MockLink.h"

class ParameterManagerTest : public UnitTest
{
    Q_OBJECT
    
private slots:
    void _noFailure(void);
    // FIXME: Hack to work around changed no reponse handling
    //void _requestListNoResponse(void);
    void _requestListMissingParamSuccess(void);
    void _requestListMissingParamFail(void);

private:
    void _noFailureWorker(MockConfiguration::FailureMode_t failureMode);
};

#endif
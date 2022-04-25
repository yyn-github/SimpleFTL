#ifndef __FTL_H__
#define __FTL_H__

#include "pubdef.h"
#include "config.h"

class FTL
{
public:
	FTL(Config *pConfig);
	virtual ~FTL();

	Config *m_pConfig;

public:
	void Init();
	void WaitingTransactionProcess();
};
#endif //__FTL_H__
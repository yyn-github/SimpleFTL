#ifndef __DEVICE_H__ 
#define __DEVICE_H__ 

#include "pubdef.h" 
#include "config.h"
#include "ftl.h"
#include "flash.h"

class Device{
	public:
	Device(Config* pConfig);
	virtual ~Device();

	void Read(LHA_T section_addr,uint32_t section_count,BYTE* pBuffer);
	void Write(LHA_T section_addr, uint32_t section_count,BYTE* pContent);
	void Erase(LHA_T section_addr,uint32_t section_count);

	protected:
	void Init();

	protected:
	Config* m_pConfig;
	FTL* m_pFtl;
	Flash* m_pFlash;
};

#endif //__DEVICE_H__ 
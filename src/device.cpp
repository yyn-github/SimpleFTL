#include "device.h"

Device::Device(Config* pConfig){
	m_pConfig = pConfig;
}

Device::~Device(){
	SAFEDEL(m_pFtl);
	SAFEDEL(m_pFlash);
}

void Device::Init(){
	SAFEDEL(m_pFtl);
	SAFEDEL(m_pFlash);

	m_pFlash = new Flash(m_pConfig);
	m_pFlash->Init();

	m_pFtl = new FTL(m_pConfig);
	m_pFtl->Init();
}

void Device::Read(LHA_T section_addr,uint32_t section_count,BYTE* pBuffer){
}

void Device::Write(LHA_T section_addr, uint32_t section_count,BYTE* pContent){}
void Device::Erase(LHA_T section_addr,uint32_t section_count){}
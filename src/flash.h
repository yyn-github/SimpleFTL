#ifndef __FLASH_H__
#define __FLASH_H__

#include "config.h"

class Flash{
	public:
	Flash(Config* pConfig);
	~Flash();

	void Init();
	void InitCapaity();



	Config* m_pConfig;

public:
	byte* m_pBuffer;		//main capaity;
	uint32_t section_no;

protected:
	uint32_t chip_no; 
	uint32_t die_per_chip; 
	uint32_t plane_per_die; 
	uint32_t block_per_plane; 
	uint32_t page_per_block; 
	uint32_t byte_per_page;

};
#endif //__FLASH_H__
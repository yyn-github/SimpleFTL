#ifndef __CONFIG_H__
#define __CONFIG_H__

#include "pubdef.h"

class Config{
	public:
	Config(const char* file_name);
	virtual ~Config();

	void Init();
	bool ReadConfig();

public:
	string m_sCfgFileName;

	uint32_t chip_no; 
	uint32_t die_per_chip; 
	uint32_t plane_per_die; 
	uint32_t block_per_plane; 
	uint32_t page_per_block; 
	uint32_t byte_per_page;
};
#endif //__CONFIG_H__
#include "flash.h"
#include "config.h"

Flash::Flash(Config *pConfig)
{
	m_pConfig = pConfig;
}

void Flash::Init()
{
	chip_no = m_pConfig->chip_no;
	die_per_chip = m_pConfig->die_per_chip;
	plane_per_die = m_pConfig->plane_per_die;
	block_per_plane = m_pConfig->block_per_plane;
	page_per_block = m_pConfig->page_per_block;
	byte_per_page = m_pConfig->byte_per_page;
}

void Flash::InitCapaity(){
	section_no = (chip_no * die_per_chip * plane_per_die * block_per_plane * page_per_block * byte_per_page) / SEC_SIZE;
	m_pBuffer = new byte[section_no * SEC_SIZE];
}
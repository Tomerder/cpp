/**************************************************************************************
    Author : Tomer Dery
    Creation date :      31.12.13
    Date last modified : 31.12.13 - 1.1.14
    Description : memory pool 
***************************************************************************************/
#ifndef __MEM_H__
#define __MEM_H__


class Memory_t{   //abstract

private: 	
	int m_numOfBytesWriten;
	
	int m_curPos;

	//will never be use
	Memory_t(const Memory_t& _mem);	
	Memory_t& operator=(const Memory_t& _mem);
	
public: 
	
	Memory_t() : m_numOfBytesWriten(0) ,  m_curPos(0) {};  	
		
	virtual ~Memory_t();	
	
	virtual int getCurPos() const {return m_curPos;}
	virtual bool setCurPos(int _pos);

	void setCurSize(int _size) {m_numOfBytesWriten = _size;} 
	
	bool isEmpty() const {return (m_numOfBytesWriten == 0 ); } 
	int getCurSize() const {return m_numOfBytesWriten ; } 

	virtual bool write(const void* _dataToWrite, int _len) ; 
	virtual bool write(const void* _dataToWrite, int _len, int _pos) ; 
	
	virtual bool read(void* _buffer, int _len ) ; 
	virtual bool read(void* _buffer, int _len, int _pos) ; 

};


	
#endif /*__MEM_H__*/


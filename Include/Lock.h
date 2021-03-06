//Download by http://www.NewXing.com

#ifndef _LOCK_H_ 
#define _LOCK_H_
#pragma once
//=============================================================
//锁，就是用来对多个线程都要访问的资源--临界区，进行互斥控制的。
//很显然，这是一个可重用的类。
//=============================================================
class CLock  
{
public:
	void Lock();		//等待，没有其它线程在用，即可进入临界区
	void UnLock();		//撤销，表示访问临界区结束
	CLock();			//自动创建互斥变量
	CLock(BOOL);			//自动创建互斥变量
	virtual ~CLock();	//自动释放互斥变量
private:
	HANDLE		m_hMutex;//互斥变量
};
//==============================================================
#endif
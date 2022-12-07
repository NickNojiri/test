/*
 *	@file h34.h
 *  @author Your name goes here
 *  @version  what day and meeting time
 */
#ifndef H34_H_
#define H34_H_

#include <string>

/////// Declare all of your classes here ////////////////
/////// In this order: Worker, SalariedWorker, HourlyWorker
// each worker has a rate or salary name and pay into which is a too string method
class Worker
{// class globeallsallfdd
	std::string name;
	double rate;
public:
	Worker(const std::string& name, double rate);
	virtual~Worker();
	double getRate()const;
	std::string getName()const;
	virtual std::string payInfo(int hr)const=0 ;

}; 

class SalariedWorker : public Worker
{
public:
	SalariedWorker(const std::string& name, double rate);
	std::string payInfo(int hr)const;
};

class HourlyWorker :public Worker
{
public:
	HourlyWorker(const std::string& name, double rate);
	std::string payInfo(int hr)const;
	
};

#endif

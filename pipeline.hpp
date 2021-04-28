#ifndef PIPELINE_H
#define PIPELINE_H

#include <iostream>
#include <vector>
#include "ioperation.hpp"
#include "operation.hpp"

template <typename T>
class Pipeline : public IOperation<T> {
private:
	IOperation<T> success;
	IOperation<T> fail;
	std::vector<T> operations;
	IOperation<T> Next;
	IOperation<T> Terminate;
public:
	Pipeline();
	void RegisterOperation(IOperation<T>);
	void invoke(T);
	bool Success(T);
	bool Fail(T);
	void Continue(T);
};
#endif
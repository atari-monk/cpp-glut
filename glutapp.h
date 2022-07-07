#ifndef GLUTAPP_H
#define GLUTAPP_H

#include "model.h"

class GlutApp {
	Model *model = nullptr;
public:
	GlutApp(Model *modelService)
		: model(modelService)
	{
		if(model == nullptr){
			throw std::invalid_argument("service must not be null");
		}
	}
	void setup(int argc, char *argv[]);
	void setup();
	void run();
	void clean();
protected:
	void SetupWindow(int argc, char *argv[]);
};

#endif

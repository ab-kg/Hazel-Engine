#pragma once
#include "Core.h"


namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};
	
	// To be defined in CLIENT 
	Hazel::Application* CreateApplication();

}

// Entry Point
// 
// A good piece of software is client facing . 
// We want to know what is happening to the program , what is happening .  

// Logging is the method to know what are the things that are hapening in the computer . 

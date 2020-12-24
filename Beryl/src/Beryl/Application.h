#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Beryl/Events/ApplicationEvent.h"

#include "Window.h"

namespace Beryl {

	class BERYL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// define in client
	Application* CreateApplication();

}
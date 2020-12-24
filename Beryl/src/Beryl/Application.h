#pragma once

#include "Core.h"
#include "Beryl/Events/Event.h"
#include "Beryl/Events/ApplicationEvent.h"
#include "Beryl/LayerStack.h"
#include "Window.h"

namespace Beryl {

	class BERYL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);

	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// define in client
	Application* CreateApplication();

}
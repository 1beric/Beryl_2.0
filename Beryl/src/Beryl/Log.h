

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"


namespace Beryl {

	class BERYL_API Log
	{
	public:
		static void Init();


		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }


	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// CORE LOG MACROS
#define BL_CORE_TRACE(...)	::Beryl::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BL_CORE_INFO(...)	::Beryl::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BL_CORE_WARN(...)	::Beryl::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BL_CORE_ERROR(...)	::Beryl::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BL_CORE_FATAL(...)	::Beryl::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// CORE LOG MACROS
#define BL_TRACE(...)	::Beryl::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BL_INFO(...)	::Beryl::Log::GetClientLogger()->info(__VA_ARGS__)
#define BL_WARN(...)	::Beryl::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BL_ERROR(...)	::Beryl::Log::GetClientLogger()->error(__VA_ARGS__)
#define BL_FATAL(...)	::Beryl::Log::GetClientLogger()->fatal(__VA_ARGS__)
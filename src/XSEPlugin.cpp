
#include "CombatEsc_DataHandler.hpp"

namespace {


	void Init() {
		auto g_message = SKSE::GetMessagingInterface();

		if (!g_message) {
			logger::error("Messaging Interface Not Found!");
		}

		if (g_message->RegisterListener(MaxsuCombatEscape::EventCallback)) {
			logger::info("Register Event Call Back!");
		}
	}
}

SKSEPluginLoad(const LoadInterface* a_skse) {
	Init(a_skse);
	Init();
	return true;
}

SKSEPluginInfo(
	.Version = REL::Version{ 1, 0, 0, 0 },
	.Name = "MaxsucombatEscapeAE",
	.Author = "Maxsu",
	.StructCompatibility = SKSE::StructCompatibility::Independent,
	.RuntimeCompatibility = SKSE::VersionIndependence::AddressLibrary
);





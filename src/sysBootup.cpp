#include "App.h"
#include "sysNew.h"
#include "system.h"

/**
 * @todo: Documentation
 */
#ifdef GAMECUBE
TERNARY_BUILD_MATCHING(void, int) main(int argc, char* argv[])
#else
void sysBootupMain()
#endif
{
	gsys->Initialise();
	nodeMgr = new NodeMgr();
	gsys->run(new PlugPikiApp());

	OSErrorLine(29, "End of demo");
}

#ifdef PCPORT
extern "C" void DolphinMain() {
	sysBootupMain();
}
#endif
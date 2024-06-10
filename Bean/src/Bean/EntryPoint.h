#pragma once

#ifdef BN_PLATFORM_WINDOWS

extern Bean::Application* Bean::CreateApplication();

int main(int argc, char** argv)
{
	printf("Bean Engine\n");
	auto app = Bean::CreateApplication();
	app->Run();
	delete app;
}

#endif
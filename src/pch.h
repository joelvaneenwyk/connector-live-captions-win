#pragma once

#define ASIO_NO_WIN32_LEAN_AND_MEAN
#include <asio.hpp>
#include <chrono>
#include <fstream>
#include <iostream>
#include <sdkddkver.h>

#define _WIN32_WINNT 0x0601
#include <windows.h>

#include <argparse/argparse.hpp>
#include <uiautomation.h>
#include <wil/resource.h>
#include <winrt/windows.ui.uiautomation.h>

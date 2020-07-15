#pragma once

// #include "HostClass.g.h"
#include "IMyComInterface.h"

// namespace winrt::ScratchWinRTServer::implementation
// {
struct HostClass : winrt::implements<HostClass, IMyComInterface>
{
    HostClass(const winrt::guid& g);
    ~HostClass();
    void DoTheThing();

    int DoCount();
    winrt::guid Id();

    HRESULT __stdcall Call() override;

private:
    int _DoCount{ 0 };
    winrt::guid _id;
};
// }

// namespace winrt::ScratchWinRTServer::factory_implementation
// {
//     struct HostClass : HostClassT<HostClass, implementation::HostClass>
//     {
//     };
// }
// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200703.9

#ifndef WINRT_Windows_Embedded_DeviceLockdown_1_H
#define WINRT_Windows_Embedded_DeviceLockdown_1_H
#include "winrt/impl/Windows.Embedded.DeviceLockdown.0.h"
WINRT_EXPORT namespace winrt::Windows::Embedded::DeviceLockdown
{
    struct __declspec(empty_bases) IDeviceLockdownProfileInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceLockdownProfileInformation>
    {
        IDeviceLockdownProfileInformation(std::nullptr_t = nullptr) noexcept {}
        IDeviceLockdownProfileInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceLockdownProfileStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceLockdownProfileStatics>
    {
        IDeviceLockdownProfileStatics(std::nullptr_t = nullptr) noexcept {}
        IDeviceLockdownProfileStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

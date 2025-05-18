#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::flicker::implementation
{

	

	void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
	{
		myButton().Content(box_value(L"Clicked"));
	}

	void MainWindow::Window_SizeChanged([[maybe_unused]] winrt::Windows::Foundation::IInspectable const& sender,
		winrt::Microsoft::UI::Xaml::WindowSizeChangedEventArgs const& args)
	{
		int32_t width = static_cast<int32_t>(args.Size().Width);
		int32_t height = static_cast<int32_t>(args.Size().Height);
		this->stack().Width(width);
		this->stack().Height(height);
		this->stack().Width(std::numeric_limits<double>::quiet_NaN());
	}
}


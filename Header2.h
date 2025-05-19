// header2.h
#pragma once

namespace N_header_2
{
	using namespace System;
	using namespace System::Windows::Forms;

	inline int plus_2(int x) // agregar inline aquí
	{
		return x + 2;
	}

	inline void plus_2_Click(TextBox^ in_textBox, TextBox^ out_textBox) // y aquí también
	{
		int n = Convert::ToInt32(in_textBox->Text);
		int result = plus_2(n);
		out_textBox->AppendText(String::Format("plus_2({0})={1}\r\n", n, result));
	}

}
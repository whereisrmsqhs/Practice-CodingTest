#include <iostream>

namespace {
	// �� �Լ��� �� ���� �ȿ����� ����� �� �ֽ��ϴ�.
	// �̴� ��ġ static int OnlyInThisFile() �� �����մϴ�.
	int OnlyInThisFile() { return 0; }

	// �� ���� ���� static int x �� �����մϴ�.
	int only_in_this_file = 0;
}  // namespace

int main() {
	OnlyInThisFile();
	only_in_this_file = 3;
}
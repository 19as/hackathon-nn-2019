#pragma once

//! �������� �������� ��������� ������
class Settings final
{
public:
    //! ����������� �����������
    Settings(const Settings&) = delete;

    //! �������� ������������ ������������ (copy assignment)
    Settings& operator=(const Settings&) = delete;

    //! ����������� �����������
    Settings(Settings&& other) = delete;

    //! �������� ������������ ������������ (move assignment)
    Settings& operator=(Settings&& other) = delete;

    //! �������� ���������
    static Settings & Instance();

    //! ������ �������� ����������
    void readSetting();
public:
    //! ����� ������ ������������� � �������
    size_t start_time = 300;

    //! ����� ��������� ������������� � �������
    size_t finish_time = 1380;

    //! ��� �������������
    size_t interval = 60;

    //! ����������� ��� �������� csv ������
    char delimery = ',';

    //! ����� ������� � ���� ������
    bool timeStr = true;

    //! ������� �����, ������������ ������������ ���������
    double publicTransportUsePercent = 0.4;

private:
    //! �����������
    Settings();

    //! ����������
    virtual ~Settings();
};
#ifndef WAIFU2XCONVERTERQTSETTINGS_H
#define WAIFU2XCONVERTERQTSETTINGS_H

#include <QSettings>

class waifu2xConverterQtSettings : public QSettings
{
public:
    waifu2xConverterQtSettings(QObject* parent = nullptr);

    void setWaifu2xConverterCppLocation(const QString& location)
    {
        setValue("Waifu2xConverterCppLocation", location);
    }
    QString waifu2xConverterCppLocation() const
    {
        return value("Waifu2xConverterCppLocation").toString();
    }

    void setThreadsCount(int count)
    {
        setValue("ThreadsCount", count);
    }
    int threadsCount() const
    {
        return value("ThreadsCount", 4).toInt();
    }

    void setScaleRatio(double ratio)
    {
        setValue("ScaleRatio", ratio);
    }
    double scaleRatio() const
    {
        return value("ScaleRatio", 2.0).toDouble();
    }

    void setNoiseReductionLevel(int level)
    {
        setValue("NoiseReductionLevel", level);
    }
    int noiseReductionLevel() const
    {
        return value("NoiseReductionLavel", 1).toInt();
    }

    void setImageProcessingMode(const QString& mode)
    {
        setValue("ImageProcessingMode", mode);
    }
    QString imageProcessingMode() const
    {
        return value("ImageProcessingMode", "noise_scale").toString();
    }

    void setUseCustomFileName(bool on)
    {
        setValue("UseCustomFileName", on);
    }
    bool isUseCustomFileName() const
    {
        return value("UseCustomFileName").toBool();
    }
};

#endif // WAIFU2XCONVERTERQTSETTINGS_H

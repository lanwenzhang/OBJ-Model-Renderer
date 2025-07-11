#pragma once

#include "../../common.h"
#include "../../wrapper/device.h"
#include "../../wrapper/buffer.h"
#include "../../wrapper/description.h"

namespace lzvk::renderer {

    class SkyboxUniformManager {
    public:

        using Ptr = std::shared_ptr<SkyboxUniformManager>;
        static Ptr create() { return std::make_shared<SkyboxUniformManager>(); }

        SkyboxUniformManager();
        ~SkyboxUniformManager();

        void init(const lzvk::wrapper::Device::Ptr& device, const lzvk::wrapper::CommandPool::Ptr& commandPool, const std::string& path);
        std::vector<lzvk::wrapper::UniformParameter::Ptr> getParams() const;

    private:

        lzvk::wrapper::Device::Ptr mDevice{ nullptr };
        lzvk::wrapper::CommandPool::Ptr mCommandPool{ nullptr };
        lzvk::wrapper::UniformParameter::Ptr mSkyboxParam{nullptr};
    };

}
#include "Thing.h"
#include "MockLogger.h"
#include <gtest/gtest.h>

TEST(the_thing, logs_on_contruction)
{
  std::unique_ptr<MockLogger> logger = std::make_unique<MockLogger>();

  EXPECT_CALL(*logger, log).Times(1);

  Thing thing{std::move(logger)};
}
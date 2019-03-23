#include "torch_xla/csrc/ops/xla_ops.h"

namespace torch_xla {
namespace ir {
namespace ops {

const OpKindWrapper xla_device_data("xla::device_data");
const OpKindWrapper xla_tensor_data("xla::tensor_data");
const OpKindWrapper xla_cross_replica_sum("xla::cross_replica_sum");
const OpKindWrapper xla_cast("xla::cast");
const OpKindWrapper xla_not_supported("xla::not_supported");
const OpKindWrapper xla_update_slice("xla::update_slice");
const OpKindWrapper xla_generic_slice("xla::generic_slice");

}  // namespace ops
}  // namespace ir
}  // namespace torch_xla

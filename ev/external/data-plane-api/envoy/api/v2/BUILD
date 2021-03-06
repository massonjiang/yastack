load("//bazel:api_build_system.bzl", "api_proto_library", "api_go_proto_library", "api_go_grpc_library")

licenses(["notice"])  # Apache 2

# Friends of core API packages - filters, services, service configs.
# Package //envoy/api/v2 contains xDS and discovery definitions that should
# be in //envoy/service/discovery, but remain here for backwards compatibility.
package_group(
    name = "friends",
    packages = [
        "//envoy/api/v2",
        "//envoy/config/...",
        "//envoy/service/...",
    ],
)

api_proto_library(
    name = "discovery",
    srcs = ["discovery.proto"],
    visibility = [":friends"],
    deps = ["//envoy/api/v2/core:base"],
)

api_go_proto_library(
    name = "discovery",
    proto = ":discovery",
    deps = ["//envoy/api/v2/core:base_go_proto"],
)

api_proto_library(
    name = "eds",
    srcs = ["eds.proto"],
    has_services = 1,
    visibility = [":friends"],
    deps = [
        ":discovery",
        "//envoy/api/v2/core:address",
        "//envoy/api/v2/core:base",
        "//envoy/api/v2/core:health_check",
        "//envoy/api/v2/endpoint",
    ],
)

api_go_grpc_library(
    name = "eds",
    proto = ":eds",
    deps = [
        ":discovery_go_proto",
        "//envoy/api/v2/core:address_go_proto",
        "//envoy/api/v2/core:base_go_proto",
        "//envoy/api/v2/core:health_check_go_proto",
        "//envoy/api/v2/endpoint:endpoint_go_proto",
    ],
)

api_proto_library(
    name = "cds",
    srcs = ["cds.proto"],
    has_services = 1,
    visibility = [":friends"],
    deps = [
        ":discovery",
        "//envoy/api/v2/auth:cert",
        "//envoy/api/v2/cluster:circuit_breaker",
        "//envoy/api/v2/cluster:outlier_detection",
        "//envoy/api/v2/core:address",
        "//envoy/api/v2/core:base",
        "//envoy/api/v2/core:config_source",
        "//envoy/api/v2/core:health_check",
        "//envoy/api/v2/core:protocol",
    ],
)

api_go_grpc_library(
    name = "cds",
    proto = ":cds",
    deps = [
        ":discovery_go_proto",
        "//envoy/api/v2/auth:cert_go_proto",
        "//envoy/api/v2/cluster:circuit_breaker_go_proto",
        "//envoy/api/v2/cluster:outlier_detection_go_proto",
        "//envoy/api/v2/core:address_go_proto",
        "//envoy/api/v2/core:base_go_proto",
        "//envoy/api/v2/core:config_source_go_proto",
        "//envoy/api/v2/core:health_check_go_proto",
        "//envoy/api/v2/core:protocol_go_proto",
    ],
)

api_proto_library(
    name = "lds",
    srcs = ["lds.proto"],
    has_services = 1,
    visibility = [":friends"],
    deps = [
        ":discovery",
        "//envoy/api/v2/core:address",
        "//envoy/api/v2/core:base",
        "//envoy/api/v2/listener",
    ],
)

api_go_grpc_library(
    name = "lds",
    proto = ":lds",
    deps = [
        ":discovery_go_proto",
        "//envoy/api/v2/core:address_go_proto",
        "//envoy/api/v2/core:base_go_proto",
        "//envoy/api/v2/listener:listener_go_proto",
    ],
)

api_proto_library(
    name = "rds",
    srcs = ["rds.proto"],
    has_services = 1,
    visibility = [":friends"],
    deps = [
        ":discovery",
        "//envoy/api/v2/core:base",
        "//envoy/api/v2/route",
    ],
)

api_go_grpc_library(
    name = "rds",
    proto = ":rds",
    deps = [
        ":discovery_go_proto",
        "//envoy/api/v2/core:base_go_proto",
        "//envoy/api/v2/route:route_go_proto",
    ],
)

#ifndef _ENCLAVE_RESOURCE_H_
#define _ENCLAVE_RESOURCE_H_

// For all
#define SWORKER_VERSION "0.9.0"
#define LEAF_SEPARATOR  "+leaf+"

// For persistence
#define OCALL_STORE_THRESHOLD 4194304 /* 4*1024*1024 */

// For enclave metadata
#define ID_METADATA "metadata"
#define ID_FILE "files"
#define ID_SRD "srd"
#define ID_KEY_PAIR "id_key_pair"
#define ID_PRE_PUB_KEY "pre_pub_key"
#define ID_REPORT_HEIGHT "report_height"
#define ID_CHAIN_ACCOUNT_ID "chain_account_id"

// For meaningful file
#define FILE_CID "cid"
#define FILE_HASH "hash"
#define FILE_SIZE "size"
#define FILE_SEALED_SIZE "s_size"
#define FILE_BLOCK_NUM "block_num"
#define FILE_CHAIN_BLOCK_NUM "c_block_num"
#define FILE_STATUS "status"
#define FILE_STATUS_UNVERIFIED '0'
#define FILE_STATUS_VALID '1'
#define FILE_STATUS_DELETED '2'
#define FILE_STATUS_PENDING '3'
// Current status
#define CURRENT_STATUS 0
// Wait to sync status
#define WAITING_STATUS 1
// Old status
#define ORIGIN_STATUS 2
#define FILE_NUMBER_UPPER_LIMIT 400000
#define FILE_CAL_BUFFER_SIZE 7340032

// For DB data
#define DB_SRD_INFO "srd_info"
#define DB_FILE_INFO "file_info"
#define DB_WL_SPEC_INFO "wl_spec_info"

// For chain data
#define CHAIN_BLOCK_NUMBER "c_block_num"
#define CHAIN_BLOCK_HASH "c_block_hash"

// For Merkle tree
#define MT_CID "cid"
#define MT_HASH "hash"
#define MT_DATA_HASH "d_hash"
#define MT_LINKS "links"
#define MT_LINKS_NUM "l_num"

// For IAS report
#define IAS_CERT "ias_cert"
#define IAS_SIG "ias_sig"
#define IAS_ISV_BODY "isv_body"
#define IAS_CHAIN_ACCOUNT_ID "account_id"
#define IAS_REPORT_SIG "sig"
#define IAS_ISV_BODY_TAG "isvEnclaveQuoteBody"

// For work report
#define WORKREPORT_PUB_KEY "pub_key"
#define WORKREPORT_PRE_PUB_KEY "pre_pub_key"
#define WORKREPORT_BLOCK_HEIGHT "block_height"
#define WORKREPORT_BLOCK_HASH "block_hash"
#define WORKREPORT_RESERVED "reserved"
#define WORKREPORT_FILES_SIZE "files_size"
#define WORKREPORT_RESERVED_ROOT "reserved_root"
#define WORKREPORT_FILES_ROOT "files_root"
#define WORKREPORT_FILES_ADDED "added_files"
#define WORKREPORT_FILES_DELETED "deleted_files"
#define WORKREPORT_SIG "sig"
#define WORKREPORT_FILE_LIMIT 1000
#define WORKREPORT_REPORT_INTERVAL 10
#define REPORT_SLOT 300
#define BLOCK_INTERVAL 6

// For workload
#define WL_SRD "srd"
#define WL_SRD_COMPLETE "srd_complete"
#define WL_SRD_ROOT_HASH "root_hash"
#define WL_SRD_SPACE "space"
#define WL_SRD_REMAINING_TASK "srd_remaining_task"
#define WL_SRD_RATIO "srd_ratio"
#define WL_FILES "files"
#define WL_FILE_SEALED_SIZE "sealed_size"
#define WL_FILE_STATUS "status"
#define WL_FILE_ROOT_HASH "file_root_hash"

// For srd
#define SRD_MAX_PER_TURN 64
#define SRD_NUMBER_UPPER_LIMIT 512000 /* 500x1024G */

// For validator
#define SRD_VALIDATE_RATE 0.005
#define SRD_VALIDATE_MIN_NUM 64
/* Meaningful disk file verification ratio */
#define MEANINGFUL_VALIDATE_RATE 0.005
#define MEANINGFUL_VALIDATE_MIN_NUM 64
#define MEANINGFUL_VALIDATE_MIN_BLOCK_NUM 1
#define MAX_BLOCK_SIZE 1048576 /* 1024*1024 */
#define SEALED_BLOCK_TAG_SIZE 4

// For ocalls
#define PERSIST_SUM "persist_sum"
#define PERSIST_SIZE "persist_size"
#define OCALL_STORE_THRESHOLD 4194304 /* 4*1024*1024 */

// Basic parameters
#define HASH_LENGTH 32
#define CID_LENGTH 46
#define ENC_MAX_THREAD_NUM  30
#define ENCLAVE_MALLOC_TRYOUT 3

// For upgrade
#define UPGRADE_PUBLIC_KEY "pub_key"
#define UPGRADE_BLOCK_HEIGHT "block_height"
#define UPGRADE_BLOCK_HASH "block_hash"
#define UPGRADE_SRD "upgrade_srd"
#define UPGRADE_SRD_ROOT "upgrade_srd_root"
#define UPGRADE_FILE "upgrade_file"
#define UPGRADE_FILE_ROOT "upgrade_file_root"
#define UPGRADE_MRENCLAVE "upgrade_mrenclave"
#define UPGRADE_SIG "upgrade_sig"
#define UPGRADE_WAIT_BLOCK_MAX 50
#define UPGRADE_WAIT_BLOCK_MIN 10

typedef enum _enc_upgrade_status_t {
    ENC_UPGRADE_STATUS_NONE,
    ENC_UPGRADE_STATUS_PROCESS,
    ENC_UPGRADE_STATUS_SUCCESS,
} enc_upgrade_status_t;

typedef enum _store_type_t {
    STORE_TYPE_REGULAR,
    STORE_TYPE_SRD,
    STORE_TYPE_FILE,
    STORE_TYPE_SRD_TEMP,
    STORE_TYPE_FILE_TEMP,
} store_type_t;

#endif /* !_ENCLAVE_RESOURCE_H_ */

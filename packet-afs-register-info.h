/* packet-afs-register-info.h
 * Routines for AFS packet dissection
 * Copyright 1999, Nathan Neulinger <nneul@umr.edu>
 * Based on routines from tcpdump patches by
 *   Ken Hornstein <kenh@cmf.nrl.navy.mil>
 * Portions based on information retrieved from the RX definitions
 *   in Arla, the free AFS client at http://www.stacken.kth.se/project/arla/
 * Portions based on information/specs retrieved from the OpenAFS sources at
 *   www.openafs.org, Copyright IBM. 
 *
 * $Id: packet-afs-register-info.h,v 1.5 2000/11/03 22:38:07 nneul Exp $
 *
 * Ethereal - Network traffic analyzer
 * By Gerald Combs <gerald@zing.org>
 * Copyright 1998 Gerald Combs
 *
 * Copied from packet-tftp.c
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

{ &hf_afs_fs, {	"File Server", "afs.fs", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "File Server" }},
{ &hf_afs_cb, {	"Callback", "afs.cb", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Callback" }},
{ &hf_afs_prot, { "Protection", "afs.prot", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Protection Server" }},
{ &hf_afs_vldb, { "VLDB", "afs.vldb", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Volume Location Database Server" }},
{ &hf_afs_kauth, { "KAuth", "afs.kauth", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Kerberos Auth Server" }},
{ &hf_afs_vol, { "Volume Server", "afs.vol", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Volume Server" }},
{ &hf_afs_error, { "Error", "afs.error", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Error" }},
{ &hf_afs_bos, { "BOS", "afs.bos", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Basic Oversee Server" }},
{ &hf_afs_update, { "Update", "afs.update", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Update Server" }},
{ &hf_afs_rmtsys, { "Rmtsys", "afs.rmtsys", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Rmtsys" }},
{ &hf_afs_ubik, { "Ubik", "afs.ubik", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Ubik" }},
{ &hf_afs_backup, { "Backup", "afs.backup", 
	FT_BOOLEAN, BASE_NONE, 0, 0, "Backup Server" }},

{ &hf_afs_fs_opcode, { "Operation", "afs.fs.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(fs_req), 0, "Operation" }},
{ &hf_afs_cb_opcode, { "Operation", "afs.cb.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(cb_req), 0, "Operation" }},
{ &hf_afs_prot_opcode, { "Operation", "afs.prot.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(prot_req), 0, "Operation" }},
{ &hf_afs_vldb_opcode, { "Operation", "afs.vldb.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(vldb_req), 0, "Operation" }},
{ &hf_afs_kauth_opcode, { "Operation", "afs.kauth.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(kauth_req), 0, "Operation" }},
{ &hf_afs_vol_opcode, { "Operation", "afs.vol.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(vol_req), 0, "Operation" }},
{ &hf_afs_bos_opcode, { "Operation", "afs.bos.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(bos_req), 0, "Operation" }},
{ &hf_afs_update_opcode, { "Operation", "afs.update.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(update_req), 0, "Operation" }},
{ &hf_afs_rmtsys_opcode, { "Operation", "afs.rmtsys.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(rmtsys_req), 0, "Operation" }},
{ &hf_afs_error_opcode, { "Operation", "afs.error.opcode", 
	FT_UINT32, BASE_DEC,
	0, 0, "Operation" }},
{ &hf_afs_backup_opcode, {
	"Operation", "afs.backup.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(backup_req), 0, "Operation" }},
{ &hf_afs_ubik_opcode, {
	"Operation", "afs.ubik.opcode", 
	FT_UINT32, BASE_DEC,
	VALS(ubik_req), 0, "Operation" }},


/* File Server Fields */
{ &hf_afs_fs_fid_volume, { "FileID (Volume)", "afs.fs.fid.volume", 
	FT_UINT32, BASE_DEC,
	0, 0, "File ID (Volume)" }},
{ &hf_afs_fs_fid_vnode, { "FileID (VNode)", "afs.fs.fid.vnode", 
	FT_UINT32, BASE_DEC,
	0, 0, "File ID (VNode)" }},
{ &hf_afs_fs_fid_uniqifier, { "FileID (Uniqifier)", "afs.fs.fid.uniq", 
	FT_UINT32, BASE_DEC,
	0, 0, "File ID (Uniqifier)" }},
{ &hf_afs_fs_offset, { "Offset", "afs.fs.offset", 
	FT_UINT32, BASE_DEC,
	0, 0, "Offset" }},
{ &hf_afs_fs_length, { "Length", "afs.fs.length", 
	FT_UINT32, BASE_DEC, 0, 0, "Length" }},
{ &hf_afs_fs_flength, { "FLength", "afs.fs.flength", 
	FT_UINT32, BASE_DEC, 0, 0, "FLength" }},
{ &hf_afs_fs_errcode, { "Error Code", "afs.fs.errcode", 
	FT_UINT32, BASE_DEC, VALS(afs_errors), 0, "Error Code" }},
{ &hf_afs_fs_data, { "Data", "afs.fs.data", 
	FT_BYTES, BASE_HEX, 0, 0, "Data" }},
{ &hf_afs_fs_token, { "Token", "afs.fs.token", 
	FT_BYTES, BASE_HEX, 0, 0, "Token" }},
{ &hf_afs_fs_oldname, { "Old Name", "afs.fs.oldname", 
	FT_STRING, BASE_HEX, 0, 0, "Old Name" }},
{ &hf_afs_fs_newname, { "New Name", "afs.fs.newname", 
	FT_STRING, BASE_HEX, 0, 0, "New Name" }},
{ &hf_afs_fs_name, { "Name", "afs.fs.name", 
	FT_STRING, BASE_HEX, 0, 0, "Name" }},
{ &hf_afs_fs_symlink_name, { "Symlink Name", "afs.fs.symlink.name", 
	FT_STRING, BASE_HEX, 0, 0, "Symlink Name" }},
{ &hf_afs_fs_symlink_content, { "Symlink Content", "afs.fs.symlink.content", 
	FT_STRING, BASE_HEX, 0, 0, "Symlink Content" }},
{ &hf_afs_fs_volid, { "Volume ID", "afs.fs.volid", 
	FT_UINT32, BASE_DEC, 0, 0, "Volume ID" }},
{ &hf_afs_fs_volname, { "Volume Name", "afs.fs.volname", 
	FT_STRING, BASE_HEX, 0, 0, "Volume Name" }},
{ &hf_afs_fs_timestamp, { "Timestamp", "afs.fs.timestamp", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Timestamp" }},
{ &hf_afs_fs_offlinemsg, { "Offline Message", "afs.fs.offlinemsg", 
	FT_STRING, BASE_HEX, 0, 0, "Volume Name" }},
{ &hf_afs_fs_motd, { "Message of the Day", "afs.fs.motd", 
	FT_STRING, BASE_HEX, 0, 0, "Message of the Day" }},
{ &hf_afs_fs_xstats_version, { "XStats Version", "afs.fs.xstats.version", 
	FT_UINT32, BASE_DEC, 0, 0, "XStats Version" }},
{ &hf_afs_fs_xstats_clientversion, { "Client Version", "afs.fs.xstats.clientversion", 
	FT_UINT32, BASE_DEC, 0, 0, "Client Version" }},
{ &hf_afs_fs_xstats_version, { "Collection Number", "afs.fs.xstats.collnumber", 
	FT_UINT32, BASE_DEC, VALS(xstat_collections), 0, "Collection Number" }},
{ &hf_afs_fs_xstats_timestamp, { "XStats Timestamp", "afs.fs.xstats.timestamp", 
	FT_UINT32, BASE_DEC, 0, 0, "XStats Timestamp" }},
{ &hf_afs_fs_cps_spare1, { "CPS Spare1", "afs.fs.cps.spare1", 
	FT_UINT32, BASE_DEC, 0, 0, "CPS Spare1" }},
{ &hf_afs_fs_cps_spare2, { "CPS Spare2", "afs.fs.cps.spare2", 
	FT_UINT32, BASE_DEC, 0, 0, "CPS Spare2" }},
{ &hf_afs_fs_cps_spare3, { "CPS Spare3", "afs.fs.cps.spare3", 
	FT_UINT32, BASE_DEC, 0, 0, "CPS Spare3" }},
{ &hf_afs_fs_vicelocktype, { "Vice Lock Type", "afs.fs.vicelocktype", 
	FT_UINT32, BASE_DEC, VALS(vice_lock_types), 0, "Vice Lock Type" }},
{ &hf_afs_fs_viceid, { "Vice ID", "afs.fs.viceid", 
	FT_UINT32, BASE_DEC, 0, 0, "Vice ID" }},
{ &hf_afs_fs_viceid, { "IP Address", "afs.fs.ipaddr", 
	FT_IPv4, BASE_HEX, 0, 0, "IP Address" }},
			
{ &hf_afs_fs_status_mask, { "Mask", "afs.fs.status.mask", 
	FT_UINT32, BASE_HEX, 0, 0, "Mask" }},
{ &hf_afs_fs_status_mask_setmodtime, { "Set Modification Time", "afs.fs.status.mask.setmodtime", 
	FT_UINT32, BASE_BIN, 0, 1, "Set Modification Time" }},
{ &hf_afs_fs_status_mask_setowner, { "Set Owner", "afs.fs.status.mask.setowner", 
	FT_UINT32, BASE_BIN, 0, 2, "Set Owner" }},
{ &hf_afs_fs_status_mask_setgroup, { "Set Group", "afs.fs.status.mask.setgroup", 
	FT_UINT32, BASE_BIN, 0, 4, "Set Group" }},
{ &hf_afs_fs_status_mask_setmode, { "Set Mode", "afs.fs.status.mask.setmode", 
	FT_UINT32, BASE_BIN, 0, 8, "Set Mode" }},
{ &hf_afs_fs_status_mask_setsegsize, { "Set Segment Size", "afs.fs.status.mask.setsegsize", 
	FT_UINT32, BASE_BIN, 0, 16, "Set Segment Size" }},
{ &hf_afs_fs_status_mask_fsync, { "FSync", "afs.fs.status.mask.fsync", 
	FT_UINT32, BASE_BIN, 0, 1024, "FSync" }},
{ &hf_afs_fs_status_clientmodtime, { "Client Modification Time", "afs.fs.status.clientmodtime", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Client Modification Time" }},
{ &hf_afs_fs_status_servermodtime, { "Server Modification Time", "afs.fs.status.servermodtime", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Server Modification Time" }},
{ &hf_afs_fs_status_owner, { "Owner", "afs.fs.status.owner", 
	FT_UINT32, BASE_DEC, 0, 0, "Owner" }},
{ &hf_afs_fs_status_group, { "Group", "afs.fs.status.group", 
	FT_UINT32, BASE_DEC, 0, 0, "Group" }},
{ &hf_afs_fs_status_mode, { "Unix Mode", "afs.fs.status.mode", 
	FT_UINT32, BASE_OCT, 0, 0, "Unix Mode" }},
{ &hf_afs_fs_status_segsize, { "Segment Size", "afs.fs.status.segsize", 
	FT_UINT32, BASE_DEC, 0, 0, "Segment Size" }},
{ &hf_afs_fs_status_interfaceversion, { "Interface Version", "afs.fs.status.interfaceversion", 
	FT_UINT32, BASE_DEC, 0, 0, "Interface Version" }},
{ &hf_afs_fs_status_filetype, { "File Type", "afs.fs.status.filetype", 
	FT_UINT32, BASE_DEC, 0, 0, "File Type" }},
{ &hf_afs_fs_status_author, { "Author", "afs.fs.status.author", 
	FT_UINT32, BASE_DEC, 0, 0, "Author" }},
{ &hf_afs_fs_status_calleraccess, { "Caller Access", "afs.fs.status.calleraccess", 
	FT_UINT32, BASE_DEC, 0, 0, "Caller Access" }},
{ &hf_afs_fs_status_anonymousaccess, { "Anonymous Access", "afs.fs.status.anonymousaccess", 
	FT_UINT32, BASE_DEC, 0, 0, "Anonymous Access" }},
{ &hf_afs_fs_status_parentvnode, { "Parent VNode", "afs.fs.status.parentvnode", 
	FT_UINT32, BASE_DEC, 0, 0, "Parent VNode" }},
{ &hf_afs_fs_status_parentunique, { "Parent Unique", "afs.fs.status.parentunique", 
	FT_UINT32, BASE_DEC, 0, 0, "Parent Unique" }},
{ &hf_afs_fs_status_dataversion, { "Data Version", "afs.fs.status.dataversion", 
	FT_UINT32, BASE_DEC, 0, 0, "Data Version" }},
{ &hf_afs_fs_status_dataversionhigh, { "Data Version (High)", "afs.fs.status.dataversionhigh", 
	FT_UINT32, BASE_DEC, 0, 0, "Data Version (High)" }},
{ &hf_afs_fs_status_linkcount, { "Link Count", "afs.fs.status.linkcount", 
	FT_UINT32, BASE_DEC, 0, 0, "Link Count" }},
{ &hf_afs_fs_status_spare2, { "Spare 2", "afs.fs.status.spare2", 
	FT_UINT32, BASE_DEC, 0, 0, "Spare 2" }},
{ &hf_afs_fs_status_spare3, { "Spare 3", "afs.fs.status.spare3", 
	FT_UINT32, BASE_DEC, 0, 0, "Spare 3" }},
{ &hf_afs_fs_status_spare4, { "Spare 4", "afs.fs.status.spare4", 
	FT_UINT32, BASE_DEC, 0, 0, "Spare 4" }},
{ &hf_afs_fs_status_synccounter, { "Sync Counter", "afs.fs.status.synccounter", 
	FT_UINT32, BASE_DEC, 0, 0, "Sync Counter" }},
{ &hf_afs_fs_status_length, { "Length", "afs.fs.status.length", 
	FT_UINT32, BASE_DEC, 0, 0, "Length" }},


{ &hf_afs_fs_volsync_spare1, { "Spare 1", "afs.fs.volsync.spare1", 
	FT_UINT32, BASE_DEC, 0, 0, "Spare 1" }},
{ &hf_afs_fs_volsync_spare2, { "Spare 2", "afs.fs.volsync.spare2", 
	FT_UINT32, BASE_DEC, 0, 0, "Spare 2" }},
{ &hf_afs_fs_volsync_spare3, { "Spare 3", "afs.fs.volsync.spare3", 
	FT_UINT32, BASE_DEC, 0, 0, "Spare 3" }},
{ &hf_afs_fs_volsync_spare4, { "Spare 4", "afs.fs.volsync.spare4", 
	FT_UINT32, BASE_DEC, 0, 0, "Spare 4" }},
{ &hf_afs_fs_volsync_spare5, { "Spare 5", "afs.fs.volsync.spare5", 
	FT_UINT32, BASE_DEC, 0, 0, "Spare 5" }},
{ &hf_afs_fs_volsync_spare6, { "Spare 6", "afs.fs.volsync.spare6", 
	FT_UINT32, BASE_DEC, 0, 0, "Spare 6" }},


{ &hf_afs_fs_acl_count_positive, {
	"ACL Count (Positive)", "afs.fs.acl.count.positive", 
	FT_UINT32, BASE_DEC,
	0, 0, "Number of Positive ACLs" }},
{ &hf_afs_fs_acl_count_negative, {
	"ACL Count (Negative)", "afs.fs.acl.count.negative", 
	FT_UINT32, BASE_DEC,
	0, 0, "Number of Negative ACLs" }},
{ &hf_afs_fs_acl_datasize, {
	"ACL Size", "afs.fs.acl.datasize", 
	FT_UINT32, BASE_DEC,
	0, 0, "ACL Data Size" }},
{ &hf_afs_fs_acl_entity, {
	"Entity (User/Group)", "afs.fs.acl.entity", 
	FT_STRING, BASE_HEX,
	0, 0, "ACL Entity (User/Group)" }},
{ &hf_afs_fs_acl_r, {
	"_R_ead", "afs.fs.acl.r", 
	FT_UINT8, BASE_BIN,
	0, PRSFS_READ, "Read" }},
{ &hf_afs_fs_acl_l, {
	"_L_ookup", "afs.fs.acl.l", 
	FT_UINT8, BASE_BIN,
	0, PRSFS_LOOKUP, "Lookup" }},
{ &hf_afs_fs_acl_i, {
	"_I_nsert", "afs.fs.acl.i", 
	FT_UINT8, BASE_BIN,
	0, PRSFS_INSERT, "Insert" }},
{ &hf_afs_fs_acl_d, { "_D_elete", "afs.fs.acl.d", 
	FT_UINT8, BASE_BIN,
	0, PRSFS_DELETE, "Delete" }},
{ &hf_afs_fs_acl_w, { "_W_rite", "afs.fs.acl.w", 
	FT_UINT8, BASE_BIN, 0, PRSFS_WRITE, "Write" }},
{ &hf_afs_fs_acl_k, { "_L_ock", "afs.fs.acl.k", 
	FT_UINT8, BASE_BIN, 0, PRSFS_LOCK, "Lock" }},
{ &hf_afs_fs_acl_a, { "_A_dminister", "afs.fs.acl.a", 
	FT_UINT8, BASE_BIN, 0, PRSFS_ADMINISTER, "Administer" }},

{ &hf_afs_fs_callback_version, { "Version", "afs.fs.callback.version", 
	FT_UINT32, BASE_DEC, 0, 0, "Version" }},
{ &hf_afs_fs_callback_expires, { "Expires", "afs.fs.callback.expires", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Expires" }},
{ &hf_afs_fs_callback_type, { "Type", "afs.fs.callback.type", 
	FT_UINT32, BASE_DEC, VALS(cb_types), 0, "Type" }},

/* BOS Server Fields */
{ &hf_afs_bos_errcode, { "Error Code", "afs.bos.errcode", 
	FT_UINT32, BASE_DEC, VALS(afs_errors), 0, "Error Code" }},
{ &hf_afs_bos_type, { "Type", "afs.bos.type", 
	FT_STRING, BASE_HEX, 0, 0, "Type" }},
{ &hf_afs_bos_content, { "Content", "afs.bos.content", 
	FT_STRING, BASE_HEX, 0, 0, "Content" }},
{ &hf_afs_bos_data, { "Data", "afs.bos.data", 
	FT_BYTES, BASE_HEX, 0, 0, "Data" }},
{ &hf_afs_bos_path, { "Path", "afs.bos.path", 
	FT_STRING, BASE_HEX, 0, 0, "Path" }},
{ &hf_afs_bos_parm, { "Parm", "afs.bos.parm", 
	FT_STRING, BASE_HEX, 0, 0, "Parm" }},
{ &hf_afs_bos_error, { "Error", "afs.bos.error", 
	FT_STRING, BASE_HEX, 0, 0, "Error" }},
{ &hf_afs_bos_spare1, { "Spare1", "afs.bos.spare1", 
	FT_STRING, BASE_HEX, 0, 0, "Spare1" }},
{ &hf_afs_bos_spare2, { "Spare2", "afs.bos.spare2", 
	FT_STRING, BASE_HEX, 0, 0, "Spare2" }},
{ &hf_afs_bos_spare3, { "Spare3", "afs.bos.spare3", 
	FT_STRING, BASE_HEX, 0, 0, "Spare3" }},
{ &hf_afs_bos_file, { "File", "afs.bos.file", 
	FT_STRING, BASE_HEX, 0, 0, "File" }},
{ &hf_afs_bos_cmd, { "Command", "afs.bos.cmd", 
	FT_STRING, BASE_HEX, 0, 0, "Command" }},
{ &hf_afs_bos_key, { "Key", "afs.bos.key", 
	FT_BYTES, BASE_HEX, 0, 0, "key" }},
{ &hf_afs_bos_user, { "User", "afs.bos.user", 
	FT_STRING, BASE_HEX, 0, 0, "User" }},
{ &hf_afs_bos_instance, { "Instance", "afs.bos.instance", 
	FT_STRING, BASE_HEX, 0, 0, "Instance" }},
{ &hf_afs_bos_status, { "Status", "afs.bos.status", 
	FT_INT32, BASE_DEC, 0, 0, "Status" }},
{ &hf_afs_bos_statusdesc, { "Status Description", "afs.bos.statusdesc", 
	FT_STRING, BASE_DEC, 0, 0, "Status Description" }},
{ &hf_afs_bos_num, { "Number", "afs.bos.number", 
	FT_UINT32, BASE_DEC, 0, 0, "Number" }},
{ &hf_afs_bos_size, { "Size", "afs.bos.size", 
	FT_UINT32, BASE_DEC, 0, 0, "Size" }},
{ &hf_afs_bos_flags, { "Flags", "afs.bos.flags", 
	FT_UINT32, BASE_DEC, 0, 0, "Flags" }},
{ &hf_afs_bos_date, { "Date", "afs.bos.date", 
	FT_UINT32, BASE_DEC, 0, 0, "Date" }},
{ &hf_afs_bos_kvno, { "Key Version Number", "afs.bos.kvno", 
	FT_UINT32, BASE_DEC, 0, 0, "Key Version Number" }},
{ &hf_afs_bos_cell, { "Cell", "afs.bos.cell", 
	FT_STRING, BASE_HEX, 0, 0, "Cell" }},
{ &hf_afs_bos_host, { "Host", "afs.bos.host", 
	FT_STRING, BASE_HEX, 0, 0, "Host" }},
{ &hf_afs_bos_newtime, { "New Time", "afs.bos.newtime", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "New Time" }},
{ &hf_afs_bos_baktime, { "Backup Time", "afs.bos.baktime", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Backup Time" }},
{ &hf_afs_bos_oldtime, { "Old Time", "afs.bos.oldtime", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Old Time" }},
{ &hf_afs_bos_keymodtime, { "Key Modification Time", "afs.bos.keymodtime", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Key Modification Time" }},
{ &hf_afs_bos_keychecksum, { "Key Checksum", "afs.bos.keychecksum", 
	FT_UINT32, BASE_DEC, 0, 0, "Key Checksum" }},
{ &hf_afs_bos_keyspare2, { "Key Spare 2", "afs.bos.keyspare2", 
	FT_UINT32, BASE_DEC, 0, 0, "Key Spare 2" }},


/* KAUTH Server Fields */
{ &hf_afs_kauth_errcode, { "Error Code", "afs.kauth.errcode", 
	FT_UINT32, BASE_DEC, VALS(afs_errors), 0, "Error Code" }},
{ &hf_afs_kauth_princ, { "Principal", "afs.kauth.princ", 
	FT_STRING, BASE_HEX, 0, 0, "Principal" }},
{ &hf_afs_kauth_realm, { "Realm", "afs.kauth.realm", 
	FT_STRING, BASE_HEX, 0, 0, "Realm" }},
{ &hf_afs_kauth_domain, { "Domain", "afs.kauth.domain", 
	FT_STRING, BASE_HEX, 0, 0, "Domain" }},
{ &hf_afs_kauth_name, { "Name", "afs.kauth.name", 
	FT_STRING, BASE_HEX, 0, 0, "Name" }},
{ &hf_afs_kauth_data, { "Data", "afs.kauth.data", 
	FT_BYTES, BASE_HEX, 0, 0, "Data" }},
{ &hf_afs_kauth_kvno, { "Key Version Number", "afs.kauth.kvno", 
	FT_UINT32, BASE_DEC, 0, 0, "Key Version Number" }},

/* VOL Server Fields */
{ &hf_afs_vol_errcode, { "Error Code", "afs.vol.errcode", 
	FT_UINT32, BASE_DEC, VALS(afs_errors), 0, "Error Code" }},
{ &hf_afs_vol_id, { "Volume ID", "afs.vol.id", 
	FT_UINT32, BASE_DEC, 0, 0, "Volume ID" }},
{ &hf_afs_vol_count, { "Volume Count", "afs.vol.count", 
	FT_UINT32, BASE_DEC, 0, 0, "Volume Count" }},
{ &hf_afs_vol_name, { "Volume Name", "afs.vol.name", 
	FT_STRING, BASE_HEX, 0, 0, "Volume Name" }},

/* VLDB Server Fields */
{ &hf_afs_vldb_errcode, { "Error Code", "afs.vldb.errcode", 
	FT_UINT32, BASE_DEC, VALS(afs_errors), 0, "Error Code" }},
{ &hf_afs_vldb_type, { "Volume Type", "afs.vldb.type", 
	FT_UINT32, BASE_DEC, VALS(volume_types), 0, "Volume Type" }},
{ &hf_afs_vldb_id, { "Volume ID", "afs.vldb.id", 
	FT_UINT32, BASE_DEC, 0, 0, "Volume ID" }},
{ &hf_afs_vldb_bump, { "Bumped Volume ID", "afs.vldb.bump", 
	FT_UINT32, BASE_DEC, 0, 0, "Bumped Volume ID" }},
{ &hf_afs_vldb_index, { "Volume Index", "afs.vldb.index", 
	FT_UINT32, BASE_DEC, 0, 0, "Volume Index" }},
{ &hf_afs_vldb_count, { "Volume Count", "afs.vldb.count", 
	FT_UINT32, BASE_DEC, 0, 0, "Volume Count" }},
{ &hf_afs_vldb_numservers, { "Number of Servers", "afs.vldb.numservers", 
	FT_UINT32, BASE_DEC, 0, 0, "Number of Servers" }},
{ &hf_afs_vldb_nextindex, { "Next Volume Index", "afs.vldb.nextindex", 
	FT_UINT32, BASE_DEC, 0, 0, "Next Volume Index" }},
{ &hf_afs_vldb_rovol, { "Read-Only Volume ID", "afs.vldb.rovol", 
	FT_UINT32, BASE_DEC, 0, 0, "Read-Only Volume ID" }},
{ &hf_afs_vldb_rwvol, { "Read-Write Volume ID", "afs.vldb.rwvol", 
	FT_UINT32, BASE_DEC, 0, 0, "Read-Only Volume ID" }},
{ &hf_afs_vldb_bkvol, { "Backup Volume ID", "afs.vldb.bkvol", 
	FT_UINT32, BASE_DEC, 0, 0, "Read-Only Volume ID" }},
{ &hf_afs_vldb_name, { "Volume Name", "afs.vldb.name", 
	FT_STRING, BASE_HEX, 0, 0, "Volume Name" }},
{ &hf_afs_vldb_partition, { "Partition", "afs.vldb.partition", 
	FT_STRING, BASE_HEX, 0, 0, "Partition" }},
{ &hf_afs_vldb_server, { "Server", "afs.vldb.server", 
	FT_IPv4, BASE_HEX, 0, 0, "Server" }},
{ &hf_afs_vldb_serveruuid, { "Server UUID", "afs.vldb.serveruuid", 
	FT_BYTES, BASE_HEX, 0, 0, "Server UUID" }},

/* BACKUP Server Fields */
{ &hf_afs_backup_errcode, { "Error Code", "afs.backup.errcode", 
	FT_UINT32, BASE_DEC, VALS(afs_errors), 0, "Error Code" }},

/* CB Server Fields */
{ &hf_afs_cb_errcode, { "Error Code", "afs.cb.errcode", 
	FT_UINT32, BASE_DEC, VALS(afs_errors), 0, "Error Code" }},
{ &hf_afs_cb_callback_version, { "Version", "afs.cb.callback.version", 
	FT_UINT32, BASE_DEC, 0, 0, "Version" }},
{ &hf_afs_cb_callback_expires, { "Expires", "afs.cb.callback.expires", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Expires" }},
{ &hf_afs_cb_callback_type, { "Type", "afs.cb.callback.type", 
	FT_UINT32, BASE_DEC, VALS(cb_types), 0, "Type" }},
{ &hf_afs_cb_fid_volume, { "FileID (Volume)", "afs.cb.fid.volume", 
	FT_UINT32, BASE_DEC, 0, 0, "File ID (Volume)" }},
{ &hf_afs_cb_fid_vnode, { "FileID (VNode)", "afs.cb.fid.vnode", 
	FT_UINT32, BASE_DEC, 0, 0, "File ID (VNode)" }},
{ &hf_afs_cb_fid_uniqifier, { "FileID (Uniqifier)", "afs.cb.fid.uniq", 
	FT_UINT32, BASE_DEC, 0, 0, "File ID (Uniqifier)" }},

/* PROT Server Fields */
{ &hf_afs_prot_errcode, { "Error Code", "afs.prot.errcode", 
	FT_UINT32, BASE_DEC, VALS(afs_errors), 0, "Error Code" }},
{ &hf_afs_prot_name, { "Name", "afs.prot.name", 
	FT_STRING, BASE_HEX, 0, 0, "Name" }},
{ &hf_afs_prot_id, { "ID", "afs.prot.id", 
	FT_UINT32, BASE_DEC, 0, 0, "ID" }},
{ &hf_afs_prot_oldid, { "Old ID", "afs.prot.oldid", 
	FT_UINT32, BASE_DEC, 0, 0, "Old ID" }},
{ &hf_afs_prot_newid, { "New ID", "afs.prot.newid", 
	FT_UINT32, BASE_DEC, 0, 0, "New ID" }},
{ &hf_afs_prot_gid, { "Group ID", "afs.prot.gid", 
	FT_UINT32, BASE_DEC, 0, 0, "Group ID" }},
{ &hf_afs_prot_uid, { "User ID", "afs.prot.uid", 
	FT_UINT32, BASE_DEC, 0, 0, "User ID" }},
{ &hf_afs_prot_count, { "Count", "afs.prot.count", 
	FT_UINT32, BASE_DEC, 0, 0, "Count" }},
{ &hf_afs_prot_maxgid, { "Maximum Group ID", "afs.prot.maxgid", 
	FT_UINT32, BASE_DEC, 0, 0, "Maximum Group ID" }},
{ &hf_afs_prot_maxuid, { "Maximum User ID", "afs.prot.maxuid", 
	FT_UINT32, BASE_DEC, 0, 0, "Maximum User ID" }},
{ &hf_afs_prot_pos, { "Position", "afs.prot.pos", 
	FT_UINT32, BASE_DEC, 0, 0, "Position" }},
{ &hf_afs_prot_flag, { "Flag", "afs.prot.flag", 
	FT_UINT32, BASE_HEX, 0, 0, "Flag" }},

/* UBIK Fields */
{ &hf_afs_ubik_errcode, { "Error Code", "afs.ubik.errcode", 
	FT_UINT32, BASE_DEC, VALS(afs_errors), 0, "Error Code" }},
{ &hf_afs_ubik_version_epoch, { "Epoch", "afs.ubik.version.epoch", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Epoch" }},
{ &hf_afs_ubik_votestart, { "Vote Started", "afs.ubik.votestart", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Vote Started" }},
{ &hf_afs_ubik_voteend, { "Vote Ends", "afs.ubik.voteend", 
	FT_ABSOLUTE_TIME, BASE_DEC, 0, 0, "Vote Ends" }},
{ &hf_afs_ubik_version_counter, { "Counter", "afs.ubik.version.counter", 
	FT_UINT32, BASE_DEC, 0, 0, "Counter" }},
{ &hf_afs_ubik_file, { "File", "afs.ubik.file", 
	FT_UINT32, BASE_DEC, 0, 0, "File" }},
{ &hf_afs_ubik_pos, { "Position", "afs.ubik.position", 
	FT_UINT32, BASE_DEC, 0, 0, "Position" }},
{ &hf_afs_ubik_length, { "Length", "afs.ubik.length", 
	FT_UINT32, BASE_DEC, 0, 0, "Length" }},
{ &hf_afs_ubik_locktype, { "Lock Type", "afs.ubik.locktype", 
	FT_UINT32, BASE_DEC, VALS(ubik_lock_types), 0, "Lock Type" }},
{ &hf_afs_ubik_votetype, { "Vote Type", "afs.ubik.votetype", 
	FT_BOOLEAN, BASE_HEX, 0, 0, "Vote Type" }},
{ &hf_afs_ubik_syncsite, { "Syncsite", "afs.ubik.syncsite", 
	FT_BOOLEAN, BASE_HEX, 0, 0, "Syncsite" }},
{ &hf_afs_ubik_site, { "Site", "afs.ubik.site", 
	FT_IPv4, BASE_HEX, 0, 0, "Site" }},

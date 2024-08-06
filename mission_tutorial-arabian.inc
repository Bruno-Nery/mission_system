// Windows-1256 for Arabic
#include <missions_tutorial-123-order>

stock arabianGetMissionTitle(missionid)
{
    new MissionTitle[128];
    if(missionid == mts_AlugarMotoFaggio) MissionTitle = "«” ∆Ã«— ”Ì«—….";
    else if(missionid == mts_MochilaMelhor)  MissionTitle = "xxx";
    else if(missionid == mts_Capacete)  MissionTitle = "xxx";
    else if(missionid == mts_TirarLicencaTerrestreA)  MissionTitle = "xxx";
    else if(missionid == mts_AlugueUmaBF400)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarSkin)  MissionTitle = "xxx";
    else if(missionid == mts_BebidaAlcoolica)  MissionTitle = "xxx";
    else if(missionid == mts_AprendaSafeZone)  MissionTitle = "xxx";
    else if(missionid == mts_AprendaPresentes)  MissionTitle = "xxx";
    else if(missionid == mts_LicencaDeArmaCIVILIAN)  MissionTitle = "xxx";
    else if(missionid == mts_AntiDM_Intro)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarArmaAmmunation)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarMunicaoAmunation)  MissionTitle = "xxx";
    else if(missionid == mts_AntiDM_SeRender)  MissionTitle = "xxx";
    else if(missionid == mts_AntiDM_SacarArma)  MissionTitle = "xxx";
    else if(missionid == mts_AntiDM_MirarArma)  MissionTitle = "xxx";
    else if(missionid == mts_Atirar)  MissionTitle = "xxx";
    else if(missionid == mts_AssaltarNPCLoja)  MissionTitle = "xxx";
    else if(missionid == mts_LavarDinheiroSujo)  MissionTitle = "xxx";
    else if(missionid == mts_SerPreso)  MissionTitle = "xxx";
    else if(missionid == mts_SaldoDinheiroBancoATM)  MissionTitle = "xxx";
    else if(missionid == mts_DepositarDinheiroBanco)  MissionTitle = "xxx";
    else if(missionid == mts_SacarDinheiroBancoATM)  MissionTitle = "xxx";
    else if(missionid == mts_AnimPickup)  MissionTitle = "xxx";
    else if(missionid == mts_MenuAnim)  MissionTitle = "xxx";
    else if(missionid == mts_ConfigAnim)  MissionTitle = "xxx";
    else if(missionid == mts_CompreCelular)  MissionTitle = "xxx";
    else if(missionid == mts_AgendaCelular)  MissionTitle = "xxx";
    else if(missionid == mts_MsgCelular)  MissionTitle = "xxx";
    else if(missionid == mts_LigarParaCelular)  MissionTitle = "xxx";
    else if(missionid == mts_Morphine)  MissionTitle = "xxx";
    else if(missionid == mts_Bandage)  MissionTitle = "xxx";
    else if(missionid == mts_Medkit)  MissionTitle = "xxx";
    else if(missionid == mts_BloodBag)  MissionTitle = "xxx";
    else if(missionid == mts_VipAccountInfo)  MissionTitle = "xxx";
    else if(missionid == mts_4LocalGritoSussurro)  MissionTitle = "xxx";
    else if(missionid == mts_EmpregoMotoboyEntregas)  MissionTitle = "xxx";
    else if(missionid == mts_TirarLicencaTerrestreB)  MissionTitle = "xxx";
    else if(missionid == mts_AlugarCarroTahoma)  MissionTitle = "xxx";
    else if(missionid == mts_CintoDeSeguranca)  MissionTitle = "xxx";
    else if(missionid == mts_TranqueSeuVeiculo)  MissionTitle = "xxx";
    else if(missionid == mts_ConsertarVeiculoOficina)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarAirbagOficina)  MissionTitle = "xxx";
    else if(missionid == mts_AbastecerVeiculoGasStation)  MissionTitle = "xxx";
    else if(missionid == mts_AbastecerVeiculoGalaoDeGasolina)  MissionTitle = "xxx";
    else if(missionid == mts_Eject)  MissionTitle = "xxx";
    else if(missionid == mts_PlantarMaconha)  MissionTitle = "xxx";
    else if(missionid == mts_UsarMaconha)  MissionTitle = "xxx";
    else if(missionid == mts_MateSuaFome)  MissionTitle = "xxx";
    else if(missionid == mts_HotelMaconha)  MissionTitle = "xxx";
    else if(missionid == mts_MetaColete1)  MissionTitle = "xxx";
    else if(missionid == mts_HotelDinheiro)  MissionTitle = "xxx";
    else if(missionid == mts_MateSuaSede)  MissionTitle = "xxx";
    else if(missionid == mts_MecanicoGuincho)  MissionTitle = "xxx";
    else if(missionid == mts_MecanicoConsertarVeiculoDeAlguem)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarBlesses)  MissionTitle = "xxx";
    else if(missionid == mts_FicarProcuradoPelaPolicia)  MissionTitle = "xxx";
    else if(missionid == mts_DiminuirLimparNivelDeProcuradoTattoBarberShops)  MissionTitle = "xxx";
    else if(missionid == mts_TirarLicencaTerrestreC)  MissionTitle = "xxx";
    else if(missionid == mts_RotasEmpregoMotoristaDeOnibus)  MissionTitle = "xxx";
    else if(missionid == mts_TirarLicencaTerrestreD)  MissionTitle = "xxx";
    else if(missionid == mts_AprendaSuprimentos)  MissionTitle = "xxx";
    else if(missionid == mts_FightStyle)  MissionTitle = "xxx";
    else if(missionid == mts_Durateston)  MissionTitle = "xxx";
    else if(missionid == mts_Stanozolol)  MissionTitle = "xxx";
    else if(missionid == mts_EmpregoPescadorPescar)  MissionTitle = "xxx";
    else if(missionid == mts_EmpregoMineradorMinerar)  MissionTitle = "xxx";
    else if(missionid == mts_RoubarATM)  MissionTitle = "xxx";
    else if(missionid == mts_RoubarCasa)  MissionTitle = "xxx";
    else if(missionid == mts_CurarPigPeen)  MissionTitle = "xxx";
    else if(missionid == mts_GanharPackage)  MissionTitle = "xxx";
    else if(missionid == mts_TirarLicencaTerrestreE)  MissionTitle = "xxx";
    else if(missionid == mts_EmpregoCaminhoneiroCaminhao)  MissionTitle = "xxx";
    else if(missionid == mts_AssaltarPlayerOFF)  MissionTitle = "xxx";
    else if(missionid == mts_CompreMateriais)  MissionTitle = "xxx";
    else if(missionid == mts_FabriquePistola)  MissionTitle = "xxx";
    else if(missionid == mts_EmpregoVendedorDeArmasSellgun)  MissionTitle = "xxx";
    else if(missionid == mts_RoubarPartner)  MissionTitle = "xxx";
    else if(missionid == mts_PlantarFolhaDeCocaina)  MissionTitle = "xxx";
    else if(missionid == mts_FabricarCocaina)  MissionTitle = "xxx";
    else if(missionid == mts_UsarCocaina)  MissionTitle = "xxx";
    else if(missionid == mts_FabricarCrack)  MissionTitle = "xxx";
    else if(missionid == mts_UsarCrack)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarVeiculo)  MissionTitle = "xxx";
    else if(missionid == mts_EstacionarVeiculo)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarLVLSeguroVeiculo)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarLVLAlarmeVeiculo)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarLVLTrancaVeiculo)  MissionTitle = "xxx";
    else if(missionid == mts_VipVehicleInfo)  MissionTitle = "xxx";
    else if(missionid == mts_MyVehicleLocate)  MissionTitle = "xxx";
    else if(missionid == mts_VehicleRemount)  MissionTitle = "xxx";
    else if(missionid == mts_AssaltarPlayerON)  MissionTitle = "xxx";
    else if(missionid == mts_BilheteLoterica)  MissionTitle = "xxx";
    else if(missionid == mts_SerCumpliceDeUmRoubo)  MissionTitle = "xxx";
    else if(missionid == mts_LadraoDeVeiculosDesmanchar)  MissionTitle = "xxx";
    else if(missionid == mts_RoubarChave)  MissionTitle = "xxx";
    else if(missionid == mts_DesmancharChave)  MissionTitle = "xxx";
    else if(missionid == mts_EntrarEmUmaFaccao)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarRadio)  MissionTitle = "xxx";
    else if(missionid == mts_6RadioFaction)  MissionTitle = "xxx";
    else if(missionid == mts_ChecarSalarioFaction)  MissionTitle = "xxx";
    else if(missionid == mts_ChecarFactionTax)  MissionTitle = "xxx";
    else if(missionid == mts_EquiparArmamentosFaction)  MissionTitle = "xxx";
    else if(missionid == mts_EquiparDrogasFaction)  MissionTitle = "xxx";
    else if(missionid == mts_ArmaDeMentiraSinalizador)  MissionTitle = "xxx";
    else if(missionid == mts_MetaColete2)  MissionTitle = "xxx";
    else if(missionid == mts_Mascara)  MissionTitle = "xxx";
    else if(missionid == mts_CapturarGangZone)  MissionTitle = "xxx";
    else if(missionid == mts_VehicleFaction)  MissionTitle = "xxx";
    else if(missionid == mts_VipFactionVip)  MissionTitle = "xxx";
    else if(missionid == mts_RoubarArmazem)  MissionTitle = "xxx";
    else if(missionid == mts_SejaAbordado)  MissionTitle = "xxx";
    else if(missionid == mts_LicencaDeArmaLSPD)  MissionTitle = "xxx";
    else if(missionid == mts_EntrarCOPLSPD)  MissionTitle = "xxx";
    else if(missionid == mts_6RadioORG)  MissionTitle = "xxx";
    else if(missionid == mts_EquipCop)  MissionTitle = "xxx";
    else if(missionid == mts_EquipCop2)  MissionTitle = "xxx";
    else if(missionid == mts_ColeteCopMed)  MissionTitle = "xxx";
    else if(missionid == mts_EntregarUmaTransportBag)  MissionTitle = "xxx";
    else if(missionid == mts_AtenderChamadoHQgpsbizz)  MissionTitle = "xxx";
    else if(missionid == mts_AtenderChamadoHQgpsatm)  MissionTitle = "xxx";
    else if(missionid == mts_AtenderChamadoHQgpshouse)  MissionTitle = "xxx";
    else if(missionid == mts_AtenderChamadoHQlveh)  MissionTitle = "xxx";
    else if(missionid == mts_AtenderChamadoHQpartner)  MissionTitle = "xxx";
    else if(missionid == mts_AbordagemPolicial)  MissionTitle = "xxx";
    else if(missionid == mts_MeleeTaze)  MissionTitle = "xxx";
    else if(missionid == mts_PistolTaze)  MissionTitle = "xxx";
    else if(missionid == mts_QuebrarCarro)  MissionTitle = "xxx";
    else if(missionid == mts_PrenderProcuradoLevarAtePrisao)  MissionTitle = "xxx";
    else if(missionid == mts_FastArrestHP)  MissionTitle = "xxx";
    else if(missionid == mts_FastArrestOFF)  MissionTitle = "xxx";
    else if(missionid == mts_MandarAlberguePM)  MissionTitle = "xxx";
    else if(missionid == mts_CloseOperationGZeBIZZ)  MissionTitle = "xxx";
    else if(missionid == mts_SeizureOperationHouseAndFactionHQ)  MissionTitle = "xxx";
    else if(missionid == mts_DevolverMovelRoubado)  MissionTitle = "xxx";
    else if(missionid == mts_LocateEmpregoDetetive)  MissionTitle = "xxx";
    else if(missionid == mts_EntrarFBI)  MissionTitle = "xxx";
    else if(missionid == mts_EncontrarAssassinosCadaveres)  MissionTitle = "xxx";
    else if(missionid == mts_TaskSystemCOP)  MissionTitle = "xxx";
    else if(missionid == mts_CorrupcaoCOP)  MissionTitle = "xxx";
    else if(missionid == mts_SairOrgPrefeitura)  MissionTitle = "xxx";
    else if(missionid == mts_Jornal)  MissionTitle = "xxx";
    else if(missionid == mts_TirarLicencaMaritima)  MissionTitle = "xxx";
    else if(missionid == mts_EmpregoPirataCacaTesouro)  MissionTitle = "xxx"; 
    else if(missionid == mts_EmpregoPirataTitanic)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarCasa)  MissionTitle = "xxx";
    else if(missionid == mts_GuardarDinheiroCasa)  MissionTitle = "xxx";
    else if(missionid == mts_TrocarSenhaCasa)  MissionTitle = "xxx";
    else if(missionid == mts_FecharPortaCasa)  MissionTitle = "xxx";
    else if(missionid == mts_ComprarTrancaCasa)  MissionTitle = "xxx";
    else if(missionid == mts_ConvideUmAmigoReffer)  MissionTitle = "xxx";
    else if(missionid == mts_VipHouseInfo)  MissionTitle = "xxx";
    else if(missionid == mts_GuardarDrogasOuMaterialCasa)  MissionTitle = "xxx";
    else if(missionid == mts_SoltarPresoEmpregoAdvogado)  MissionTitle = "xxx";
    else if(missionid == mts_EmpregoMedico)  MissionTitle = "xxx";
    else if(missionid == mts_ReviverUTI)  MissionTitle = "xxx";
    else if(missionid == mts_MandarAlbergueMedico)  MissionTitle = "xxx";
    else if(missionid == mts_ReviverMedico)  MissionTitle = "xxx";
    else if(missionid == mts_CurarAmbulancia)  MissionTitle = "xxx";
    else if(missionid == mts_EstuprarDildo)  MissionTitle = "xxx";
    else if(missionid == mts_DSTPills)  MissionTitle = "xxx";
    else if(missionid == mts_RoupaAntiEstupro )  MissionTitle = "xxx";
    else if(missionid == mts_ArmaBrancaTacoDeBaseball)  MissionTitle = "xxx";
    else if(missionid == mts_AprendaDeposito)  MissionTitle = "xxx";
    else if(missionid == mts_FugirPrisao)  MissionTitle = "xxx";
    else if(missionid == mts_Sequestrar)  MissionTitle = "xxx";
    else if(missionid == mts_ChecarTrancaFac)  MissionTitle = "xxx";
    else if(missionid == mts_LucroFac)  MissionTitle = "xxx";
    else if(missionid == mts_QueimarCofre)  MissionTitle = "xxx";
    else if(missionid == mts_CharacterKill)  MissionTitle = "xxx";
    else if(missionid == mts_TaskSystemCriminal)  MissionTitle = "xxx";
    else if(missionid == mts_RoubarGroup)  MissionTitle = "xxx";
    else if(missionid == mts_RoubarDP)  MissionTitle = "xxx";
    else if(missionid == mts_FlashBang)  MissionTitle = "xxx";
    else if(missionid == mts_SmokeGrenade)  MissionTitle = "xxx";
    else if(missionid == mts_EmpregoPilotoAviao)  MissionTitle = "xxx"; 
    else if(missionid == mts_TaskSystemCivilian)  MissionTitle = "xxx";
    else if(missionid == mts_TripleBetCassino)  MissionTitle = "xxx";
    else if(missionid == mts_TirarLicencaTerrestreF)  MissionTitle = "xxx";
    else if(missionid == mts_RotasEmpregoMaquinista)  MissionTitle = "xxx";
    else if(missionid == mts_CompreSuaEmpresa)  MissionTitle = "xxx";
    else if(missionid == mts_ControleProdutosEmpresa)  MissionTitle = "xxx";
    else if(missionid == mts_ControleProtectivePointsEmpresa)  MissionTitle = "xxx";
    else if(missionid == mts_VipBizzInfo)  MissionTitle = "xxx";
    return MissionTitle;
}

stock arabianGetMissionContent(missionid)
{
    new str[256], final[3072];
    if(missionid == mts_AlugarMotoFaggio) {
        format(str, sizeof(str), "* «” √Ã— {FFD700} Faggio {FFFFFF} ·· ‰ﬁ· ›Ì Ã„Ì⁄ √‰Õ«¡ «·„œÌ‰… Ê≈ﬂ„«· √Âœ«›ﬂ. *\n");
        strcat(final, str);
        format(str, sizeof(str), "* Â‰«ﬂ √„«ﬂ‰ · √ÃÌ— «·”Ì«—«  ⁄·Ï «·Œ—Ìÿ…! *\n");
        strcat(final, str);
        format(str, sizeof(str), "··»ÕÀ ° «÷€ÿ ⁄·Ï:\n");
        strcat(final, str);
        format(str, sizeof(str), "{FFD700} Y {FFFFFF} - {FFD700} GPS {FFFFFF} - {FFD700} „—ﬂ»«  {FFFFFF} - {FFD700}  √ÃÌ— «·”Ì«—«  Ê«·œ—«Ã«  «·‰«—Ì… {FFFFFF}\n");
        strcat(final, str);
        format(str, sizeof(str), "* ⁄‰œ Ê’Ê·ﬂ ≈·Ï «·„Êﬁ⁄ ° «÷€ÿ ⁄·Ï {FFD700} Y {FFFFFF} Ê«Œ — «·”Ì«—… {FFD700} Faggio {FFFFFF}. *\n");
        strcat(final, str);
    }
    else if(missionid == mts_MochilaMelhor)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Capacete)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TirarLicencaTerrestreA)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AlugueUmaBF400)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarSkin)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_BebidaAlcoolica)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AprendaSafeZone)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AprendaPresentes)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_LicencaDeArmaCIVILIAN)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AntiDM_Intro)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarArmaAmmunation)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarMunicaoAmunation)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AntiDM_SeRender)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AntiDM_SacarArma)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AntiDM_MirarArma)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Atirar)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AssaltarNPCLoja)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_LavarDinheiroSujo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_SerPreso)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_SaldoDinheiroBancoATM)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_DepositarDinheiroBanco)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_SacarDinheiroBancoATM)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AnimPickup)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MenuAnim)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ConfigAnim)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CompreCelular)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AgendaCelular)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MsgCelular)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_LigarParaCelular)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Morphine)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Bandage)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Medkit)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_BloodBag)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_VipAccountInfo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_4LocalGritoSussurro)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EmpregoMotoboyEntregas)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TirarLicencaTerrestreB)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AlugarCarroTahoma)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CintoDeSeguranca)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TranqueSeuVeiculo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ConsertarVeiculoOficina)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarAirbagOficina)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AbastecerVeiculoGasStation)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AbastecerVeiculoGalaoDeGasolina)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Eject)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_PlantarMaconha)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_UsarMaconha)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MateSuaFome)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_HotelMaconha)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MetaColete1)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_HotelDinheiro)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MateSuaSede)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MecanicoGuincho)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MecanicoConsertarVeiculoDeAlguem)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarBlesses)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FicarProcuradoPelaPolicia)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_DiminuirLimparNivelDeProcuradoTattoBarberShops)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TirarLicencaTerrestreC)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RotasEmpregoMotoristaDeOnibus)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TirarLicencaTerrestreD)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AprendaSuprimentos)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FightStyle)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Durateston)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Stanozolol)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EmpregoPescadorPescar)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EmpregoMineradorMinerar)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RoubarATM)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RoubarCasa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CurarPigPeen)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_GanharPackage)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TirarLicencaTerrestreE)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EmpregoCaminhoneiroCaminhao)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AssaltarPlayerOFF)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CompreMateriais)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FabriquePistola)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EmpregoVendedorDeArmasSellgun)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RoubarPartner)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_PlantarFolhaDeCocaina)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FabricarCocaina)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_UsarCocaina)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FabricarCrack)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_UsarCrack)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarVeiculo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EstacionarVeiculo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarLVLSeguroVeiculo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarLVLAlarmeVeiculo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarLVLTrancaVeiculo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_VipVehicleInfo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MyVehicleLocate)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_VehicleRemount)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AssaltarPlayerON)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_BilheteLoterica)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_SerCumpliceDeUmRoubo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_LadraoDeVeiculosDesmanchar)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RoubarChave)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_DesmancharChave)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EntrarEmUmaFaccao)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarRadio)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_6RadioFaction)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ChecarSalarioFaction)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ChecarFactionTax)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EquiparArmamentosFaction)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EquiparDrogasFaction)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ArmaDeMentiraSinalizador)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MetaColete2)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Mascara)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CapturarGangZone)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_VehicleFaction)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_VipFactionVip)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RoubarArmazem)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_SejaAbordado)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_LicencaDeArmaLSPD)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EntrarCOPLSPD)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_6RadioORG)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EquipCop)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EquipCop2)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ColeteCopMed)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EntregarUmaTransportBag)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AtenderChamadoHQgpsbizz)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AtenderChamadoHQgpsatm)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AtenderChamadoHQgpshouse)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AtenderChamadoHQlveh)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AtenderChamadoHQpartner)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AbordagemPolicial)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MeleeTaze)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_PistolTaze)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_QuebrarCarro)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_PrenderProcuradoLevarAtePrisao)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FastArrestHP)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FastArrestOFF)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MandarAlberguePM)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CloseOperationGZeBIZZ)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_SeizureOperationHouseAndFactionHQ)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_DevolverMovelRoubado)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_LocateEmpregoDetetive)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EntrarFBI)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EncontrarAssassinosCadaveres)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TaskSystemCOP)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CorrupcaoCOP)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_SairOrgPrefeitura)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Jornal)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TirarLicencaMaritima)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EmpregoPirataCacaTesouro)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    } 
    else if(missionid == mts_EmpregoPirataTitanic)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarCasa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_GuardarDinheiroCasa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TrocarSenhaCasa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FecharPortaCasa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ComprarTrancaCasa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ConvideUmAmigoReffer)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_VipHouseInfo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_GuardarDrogasOuMaterialCasa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_SoltarPresoEmpregoAdvogado)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EmpregoMedico)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ReviverUTI)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_MandarAlbergueMedico)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ReviverMedico)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CurarAmbulancia)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EstuprarDildo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_DSTPills)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RoupaAntiEstupro )  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ArmaBrancaTacoDeBaseball)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_AprendaDeposito)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FugirPrisao)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_Sequestrar)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ChecarTrancaFac)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_LucroFac)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_QueimarCofre)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CharacterKill)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TaskSystemCriminal)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RoubarGroup)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RoubarDP)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_FlashBang)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_SmokeGrenade)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_EmpregoPilotoAviao)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    } 
    else if(missionid == mts_TaskSystemCivilian)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TripleBetCassino)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_TirarLicencaTerrestreF)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_RotasEmpregoMaquinista)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_CompreSuaEmpresa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ControleProdutosEmpresa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_ControleProtectivePointsEmpresa)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    else if(missionid == mts_VipBizzInfo)  {
        format(str, sizeof(str), "xxx\n");
        strcat(final, str);
    }
    return final;
}